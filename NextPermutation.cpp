//task 31
//4ms 8.6mb

class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i-1])
            {
                int temp, j;
                for (j = i; j < nums.size(); j++)
                {
                    if (nums[j] > nums[i-1]) temp = nums[j];
                    else break;
                }
                nums[j-1] = nums[i-1];
                nums[i-1] = temp;
                sort(nums.begin() + i, nums.end());
                return;
            }
            if (i == 1) sort(nums.begin(), nums.end());
        }
    }
};
