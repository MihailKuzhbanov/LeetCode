//task 53
//4ms 9.2mb

class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int temp = nums[0], result = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            temp = max(temp + nums[i], nums[i]);
            result = max(result, temp);
        }
        return result;
    }
};
