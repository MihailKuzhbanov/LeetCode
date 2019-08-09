//task 13
//STL 20ms 10.6mb
//switch-case 4ms-12ms 8.4mb

class Solution {
public:
    int convert(char d)
    {
        switch(d)
        {
            case 'M': return 1000;
            case 'D': return 500;
            case 'C': return 100;
            case 'L': return 50;
            case 'X': return 10;
            case 'V': return 5;
            case 'I': return 1;
            default: throw invalid_argument("Invlid digit");
        }
    }

    int romanToInt(string s) {
        /*
        map<char, int> roman;
        roman['M'] = 1000;
        roman['D'] = 500;
        roman['C'] = 100;
        roman['L'] = 50;
        roman['X'] = 10;
        roman['V'] = 5;
        roman['I'] = 1;
        int result = roman[s[s.size() - 1]];
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (roman[s[i]] < roman[s[i+1]])
                result -= roman[s[i]];
            else result += roman[s[i]];
        }
        return result;
        */

        int result = 0;
        int last = 0;
        for (auto it = s.rbegin(); it != s.rend(); ++it)
        {
            const int value = convert(*it);
            if (value >= last)
            {
                result += value;
                last = value;
            }
            else
            {
                result -= value;
            }
        }
        return result;

    }
};
