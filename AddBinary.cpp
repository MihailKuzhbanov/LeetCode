//task 67
//4ms 9.3mb

class Solution {
public:
    string addBinary(string a, string b)
    {
        string result;
        int i = a.size();
        int j = b.size();
        int next = 0;

        while(i + j + next)
        {
            next += (i ? a[(i--)-1] -'0' : 0) + (j ? b[(j--)-1] -'0' : 0);
            result = char(next % 2 + '0') + result;
            next /= 2;
        }
        return result;
    }
};
