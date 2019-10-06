//task 169
//12ms 10.9mb

//Voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int count(0), result(0);

        for (auto num : nums)
        {
            if (count == 0) result = num;
            count += (num == result) ? 1 : -1;
        }
        return result;
    }
};

//Mid selection (condition of majority - n/2)
class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        return (nums.size() == 1) ? nums[0] : nums[nums.size()/2];
    }
};
