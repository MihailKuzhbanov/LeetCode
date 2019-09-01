//task 70
//4ms 8.2mb

class Solution {
public:
    int climbStairs(int n)
    {
        if (n < 1) return 0;
        vector<int> result = {0,1};
        for (int i = 0; i < n; i++)
        {
            result.push_back(result[i] + result[i+1]);
        }
        return result.back();
    }
};
