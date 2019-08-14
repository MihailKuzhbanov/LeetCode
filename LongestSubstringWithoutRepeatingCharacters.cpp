//task 3
//4ms 9.2mb

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        string tmp = "";
        int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if ( tmp.find(s[i]) != string::npos)
            {
                tmp.erase(0, tmp.find(s[i])+1);
            }
            tmp += s[i];
            result = tmp.size() > result ? tmp.size() : result;
        }
        return result;
    }
};
