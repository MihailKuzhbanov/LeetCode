//task 20
//0ms 8.4mb

class Solution {
public:
    bool isValid(string s)
    {
        stack<char>arr;
        for (auto par : s)
        {
            if (arr.empty() && (par == ')' || par == ']' || par == '}')) return false;
            if (par == '(' || par == '[' || par == '{') arr.push(par);
            else
            {
                char start = arr.top();
                if ((par == ')' && start != '(') || ( par == ']' && start != '[') || ( par == '}' && start != '{')) return false;
                arr.pop();
            }
        }
        return arr.empty();
    }
};
