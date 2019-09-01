//task 334
//44ms 15.0mb

//manual reverse
class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int i = 0;
        while (i < s.size()/2)
        {
            swap(s[i], s[s.size()-i-1]);
            i++;
        }
    }
};

//one line solution
class Solution {
public:
    void reverseString(vector<char>& s)
    {
        reverse(s.begin(), s.end());
    }
};
