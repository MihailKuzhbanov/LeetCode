//task 11
//16ms 9.8mb

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int result = 0;
        int l = 0, r = height.size() - 1;
        int area;
        while (l < r)
        {
            area = r-l;
            area *= (height[l] < height[r]) ? height[l] : height[r];
            height[l] < height[r] ? l++ : r--;
            if (area > result) result = area;
        }
        return result;
    }
};
