//task 9
//4ms 8.0mb

class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0) return false;
        int count = 0;
        int y[10];
        while (x>0)
        {
            if (x/10 != 0)
            {
                y[count] = x%10;
                x /= 10;
                count ++;
            }
            else
            {
                y[count] = x%10;
                count++;
                break;
            }
        }
        for (int i = 0; i < count/2; i++)
        {
            if (y[i] != y[(count - i-1)]) return false;
        }
        return true;
    }
};
