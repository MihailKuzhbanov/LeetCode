//task 29
//4ms 8.2mb

class Solution {
public:
    int divide(int dividend, int divisor)
    {
        return (dividend != INT_MIN) ? dividend/divisor : (divisor == 1) ? INT_MIN : (divisor == -1) ? INT_MAX : dividend/divisor;
    }
};
