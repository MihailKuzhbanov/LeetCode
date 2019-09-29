//task 112
//8ms 19.8mb

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum)
    {
        if (!root) return false;
        int temp = sum - root->val;
        return (temp == 0 && !root->left && !root->right) ? true : hasPathSum(root->left, temp) || hasPathSum(root->right, temp);
    }
};
