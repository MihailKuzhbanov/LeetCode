//task 657
//8ms 10.1mb

class Solution {
public:
    bool judgeCircle(string moves)
    {
        if (moves.size() == 0) return true;
        int vertical(0), horizontal(0);
        for (auto el : moves)
        {
            if (el == 'U') vertical++;
            if (el == 'D') vertical--;
            if (el == 'R') horizontal++;
            if (el == 'L') horizontal--;
        }
        return (!vertical && !horizontal);
    }
};
