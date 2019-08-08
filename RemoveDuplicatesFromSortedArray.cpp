//16ms 9.8mb
//above 99% results

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		const int c(nums.size());				//not works with dynamic vectors
		int i = 0;
		for (int j = 0; j < c; j++)
		{
			if (nums[i] != nums[j])
			{
				i++;
				nums[i] = nums[j];
			}
		}

		return (c > 1) ? i + 1 : c;
	}
};
