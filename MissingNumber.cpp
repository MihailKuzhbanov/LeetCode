//task 268
//24ms 9.7mb

//result comparison solution
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int sum(0), cnt(0), acc(nums.size());
        for (auto el : nums)
        {
            acc += cnt++;
            sum += el;
        }
        return acc - sum;
    }
};

//near element comparison solution
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i+1] - nums[i] != 1) return (nums[i] + 1);
        }
        return (nums[0] != 0) ? 0 : (nums[nums.size()-1] + 1);
    }
};
