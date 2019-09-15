//task 108
//20ms 24.5mb

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        if (nums.empty()) return NULL;
        int mid(nums.size()/2);
        auto start(nums.begin());
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int>left(start, start + mid);
        root->left = sortedArrayToBST(left);
        vector<int>right(start + mid + 1, nums.end());
        root->right = sortedArrayToBST(right);
        return root;

    }
};
