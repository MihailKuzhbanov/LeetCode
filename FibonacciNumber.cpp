//task 509
//16ms 8.2mb

class Solution {
public:
    int fib(int N)
    {
        return (N <= 1) ? N : (fib(N-1) + fib(N-2));
    }
};
