//task 771
//4ms 8.2mb

class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
        int count (0);
        for (auto el1 : S)
            for (auto el2 : J)
                if (el1 == el2) count++;
        return count;
    }
};
