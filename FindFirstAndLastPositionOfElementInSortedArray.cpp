//task 34
//8ms 10.2mb

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> result = {-1, -1};
        if (nums.size() == 0) return result;
        int i = 0;
        while(nums[i] != target)
        {
            i++;
            if (i == nums.size()) return result;
        }
        result[0] = i;
        while (nums[i] == target)
        {
            i++;
            if (i == nums.size())
            {
                result[1] = nums.size()-1;
                return result;
            }
        }
        result[1] = i-1;
        return result;
    }
};
