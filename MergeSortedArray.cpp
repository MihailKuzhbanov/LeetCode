//task 88
//4ms 8.7mb

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int end = m + n - 1;
        --m;
        --n;
        nums1.reserve(end);
        while(n >=0)
        {
            if (m < 0 || nums2.at(n) > nums1.at(m)) nums1.at(end--) = nums2.at(n--);
            else nums1.at(end--) = nums1.at(m--);
        }
    }
};
