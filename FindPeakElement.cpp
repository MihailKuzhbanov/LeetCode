//task 162
//8ms 8.5mb

class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int l = 0, r = nums.size() - 1, m = (l + r) / 2;
        while (l < r)
        {
            (nums[m] < nums[m+1]) ? l = m + 1 : r = m;
            m = (l + r) / 2;
        }
        return l;
    }
};
