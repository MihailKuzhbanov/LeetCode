//task 4
//20ms 10.0mb

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        nums1.insert( nums1.end(), nums2.begin(), nums2.end() );
        sort(nums1.begin(), nums1.end());
        return (nums1.size() % 2 == 0) ? (nums1[nums1.size()/2 - 1] + nums1[nums1.size()/2])/2.0 : nums1[nums1.size()/2];
    }
};
