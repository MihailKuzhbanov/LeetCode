//task 8
//4ms 8.4mb

class Solution {
public:
    int myAtoi(string str)
    {
        long result(0);
        bool below(false);
        u_short i(0);
        for (short int j = 0; j < str.length(); j++)
        {
            if (str[j] != ' ')
            {
                i = j;
                break;
            }
        }
        if(str[i] == '-' || str[i] == '+') below = (str[i++] == '-') ? true : false;
        while('0'<= str[i] && str[i] <= '9')
        {
            result = result*10 + (str[i++] - '0');
            if (!below && result >= INT_MAX) return INT_MAX;
            if(below && -result <= INT_MIN) return INT_MIN;
        }
        return (below) ? -result : result;
    }

};
