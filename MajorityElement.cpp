//task 169
//28ms 11mb

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        return (nums.size() == 1) ? nums[0] : nums[nums.size()/2];
    }
};
