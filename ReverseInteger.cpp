//task 7
//0ms 8.1mb

class Solution {
public:
    int reverse(int x)
    {
        if (x <= INT_MIN) return 0;
        long int result=0;
        bool below(false);
        if (x < 0)
        {
            x = -x;
            below = true;
        }
        while (x > 0)
        {
            result = result*10+x%10;
            x /= 10;
        }
        return (result >= INT_MAX) ? 0 : below ? -result : result;
    }
};
