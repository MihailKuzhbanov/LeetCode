//task 66
//4ms 8.4mb

class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int i = 1;
        while (digits[digits.size()-i] == 9)
        {
            if (digits.size() - i == 0)
            {
                digits = vector<int>(digits.size()+1, 0);
                digits[0] = 1;
                return digits;
            }
            digits[digits.size()-i] = 0;
            i++;
        }
        if (digits[digits.size()-i] != 9)
        {
            digits[digits.size()-i]++;
        }
        return digits;
    }
};
