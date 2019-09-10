//task 704
//52ms 10.9mb

class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int left(0), right(nums.size() - 1), mid;
        while (left <= right)
        {
            mid = (right - left)/2 + left;
            if (nums[mid] == target) return mid;
            else (nums[mid] < target) ? left = mid + 1 : right = mid - 1;
        }
        return -1;
    }
};
