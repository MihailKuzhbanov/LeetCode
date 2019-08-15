//task 14
//4ms 15.1mb

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.empty()) return "";
        string result(""), shortest = strs[0];
        int i(0);
        for (string element : strs)
        {
            if (element.length() < shortest.length()) shortest = element;
        }
        for (int j = 0; j < shortest.length(); j++)
        {
            char temp = shortest[j];
            for (string element : strs)
            {
                if (element[i] != temp) return result;
            }
            result += temp;
            i++;
        }
        return result;
    }
};
