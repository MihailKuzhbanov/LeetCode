//task 1108
//4ms 8.1mb

class Solution {
public:
    string defangIPaddr(string address)
    {
        string result = "";
        for (char el : address)
            if (el == '.') result += "[.]";
            else result += el;
        return result;
    }
};
