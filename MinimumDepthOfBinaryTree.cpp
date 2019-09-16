//task 111
//4ms 20.3mb

class Solution {
public:
    int minDepth(TreeNode* root)
    {
        if (!root) return 0;
        return (root->left && root->right) ? min(minDepth(root->left), minDepth(root->right))+1 : max(minDepth(root->left), minDepth(root->right))+1;
    }
};
