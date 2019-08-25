//task 10
//0ms 9.1mb

class Solution {
public:
    bool isMatch(string s, string p)
    {
        if (s.empty() && p.empty()) return true;

        int sSize = s.size();
        int pSize = p.size();

        vector<vector<bool>> temp(sSize + 1, vector<bool>(pSize + 1, false));
        temp[0][0] = true;

        for (int i = 1; i <= sSize; ++i)
        {
            temp[i][0] == false;
        }

        for (int j = 0; j < pSize; ++j)
        {
            if(p[j] == '*' && j >= 1) temp[0][j+1] = temp[0][j-1];
        }

        for (int i = 0; i < sSize; ++i)
        {
            for (int j = 0; j < pSize; ++j)
            {
                if (p[j] != '*') temp[i+1][j+1] = temp[i][j] && (s[i] == p[j] || p[j] == '.');
                else if (p[j] == '*' && j >= 1) temp[i+1][j+1] = temp[i+1][j-1] || (temp[i][j+1] && (p[j-1] == '.' || p[j-1] == s[i]));
            }
        }
        return temp[sSize][pSize];
    }
};
