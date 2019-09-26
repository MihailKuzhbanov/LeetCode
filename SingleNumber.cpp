//task 136
//24ms 9.7mb

//check near element solution
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i+=2)
        {
            if (nums[i] != nums[i+1]) return nums[i];
        }
        if (nums[nums.size() - 2] != nums[nums.size() - 1]) return nums[nums.size() - 1];
        return 0;
    }
};

//xor and range-based loop solution
class Solution {
public:
int singleNumber(vector<int>& nums)
    {
        int x = 0;
        for (auto el : nums) x = x^el;
        return x;
    }
};

//flip-flop element sign solution
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int result = 0;
        int i = -1;
        for (auto el : nums)
        {
            result += el*i;
            i *= -1;
        }
        return abs(result);
    }
};
