//task 58
//0ms 8.5mb

class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int noSpace = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ') noSpace++;
            if (s[i] == ' ' && noSpace) return noSpace;
        }
        return noSpace;
    }
};
