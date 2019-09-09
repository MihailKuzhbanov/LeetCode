//task 22
//8ms 15.4mb

class Solution {
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> result;
        if (!n) result.push_back("");
        else
        {
            for (int i = 0; i < n; i++)
               for (string left : generateParenthesis(i))
                   for (string right : generateParenthesis(n-i-1))
                       result.push_back('(' + left + ')' + right);
        }
        return result;
    }
};
