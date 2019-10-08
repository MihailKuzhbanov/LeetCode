//task 709
//0ms 8mb

//by ref
class Solution {
public:
    string toLowerCase(string str)
    {
        for (char &el : str) if (el < 91 && el > 64) el += 32 ;
        return str;
    }
};

//by value
class Solution {
public:
    string toLowerCase(string str)
    {
        string result = "";
        for (char el : str) result += (el < 91 && el > 64) ? (el + 32) : el;
        return result;
    }
};

//native string method
class Solution {
public:
    string toLowerCase(string str)
    {
        string result = "";
        for (char el : str) result += tolower(el);
        return result;
    }
};
