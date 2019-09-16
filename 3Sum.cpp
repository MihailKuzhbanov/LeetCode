//task 15
//100ms 14.6mb

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &nums)
    {
		vector<vector<int> > result;
		if(nums.size()<3) return result;

        sort(nums.begin(),nums.end());
		for(int i = 0;i < nums.size() - 2 ; i++)
	    {
            if(((i-1) >= 0) && nums[i] == nums[i-1]) continue;

            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int temp = nums[left] + nums[right];
                if (temp < -nums[i]) left++;
                else if (temp > -nums[i]) right--;
                else
                {
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    temp = nums[left];
                    while (left < right && nums[left] == temp) left++;
                }
            }

	    }
	    return result;
    }
};
