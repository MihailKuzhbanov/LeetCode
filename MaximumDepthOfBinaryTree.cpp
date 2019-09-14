//task 104
//12ms 19.3mb

class Solution {
public:
    int maxDepth(TreeNode* root)
    {
        return (!root) ? 0 : 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};
