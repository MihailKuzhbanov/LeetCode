//task 16
//4ms 8.7mb

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());
        int bestSum = INT_MAX;
        int result = 0;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target) return target;
                if (abs(sum - target) < bestSum) bestSum = abs(sum - target), result = sum;
                (sum > target) ? right-- : left++;
            }
        }
        return  result;
    }
};
