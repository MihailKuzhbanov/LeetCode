//task 17
//0ms 8.3mb

class Solution
{
public:
	vector<string> letterCombinations(string digits)
	{
        if (digits.empty()) return {};
		vector<string> result = {""};
		vector<string> chars {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
		for (int i = 0; i < digits.size(); ++i)
		{
			int resultSize = result.size();
			for (int j = 1; j < chars[digits[i] - '0'].size(); ++j)
			{
				for (int k = 0; k < resultSize; ++k)
				{
					result.push_back(result[k] + chars[digits[i] - '0'][j]);
				}
			}
			for (int k = 0; k < resultSize; ++k)
			{
				result[k] = result[k] + chars[digits[i] - '0'][0];
			}
		}
		return result;
	}
};
