//task 5
//584ms 625.6mb

class Solution {
public:
    bool isPalindrome(string s)
    {
        if(s.size() == 0 || s.size() == 1) return true;
        int i(0), j(s.size() - 1);
        while(s[i] == s[j] && i < j)
        {
            i++;
            j--;
        }
        return i >= j;
    }

    string longestPalindrome(string s)
    {
        if(s.size() == 0 || s.size() == 1) return s;
        string result;
        int max = 0;
        for(int i = 0; i < s.size() - max; i++)
        {
            for(int j = s.size() - 1; j >= i + max; j--)
            {
                if(s[j] != s[i]) continue;
                string temp = s.substr(i, j - i + 1);
                if(isPalindrome(temp) && temp.size() > max)
                {
                    max = temp.size();
                    result = temp;
                }
             }
         }
         return result;
    }
};
