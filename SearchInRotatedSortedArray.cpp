//task 33
//0ms 8.6mb

class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        if (nums.size() == 0) return -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target) return i;
        }
        return -1;
    }
};

/*
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        if (nums.size() == 0) return -1;
        if (nums[0] >= target)
        {
            for (int i = nums.size()-1; i >= 0; i--)
            {
                if (nums[i] == target) return i;
            }
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == target) return i;
            }
        }
        return -1;
    }
};
*/
