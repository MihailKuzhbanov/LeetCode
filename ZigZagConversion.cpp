//task 6
//16ms 12.6mb

class Solution {
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1 || s.size() < 2) return s;
        string* ptr = new string[numRows];
        for (int i = 0; i < s.size(); i++)
        {
            int j = ((i / (numRows - 1)) % 2 == 0) ? i%(numRows - 1) : numRows - 1 - i%(numRows - 1);
            ptr[j] += s[i];
        }
        string result ="";
        for (int i = 0; i < numRows; i++) result.append(ptr[i]);
        return result;

    }
};
