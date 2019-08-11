//task 27
//remove() 4ms 8.4mb
//without remove() 4ms 8.8mb

//use remove()
class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

//no remove() function
class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        vector<int> newNums;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val) newNums.push_back(nums[i]);
        }
        nums = newNums;
        return newNums.size();
    }
};
