//task 110
//16ms 17.3mb

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root)
    {
        return (!root) ? 0 : 1 + max(height(root->left),height(root->right));
    }

    bool isBalanced(TreeNode* root)
    {
        return (!root) ? true : (abs(height(root->left) - height(root->right)) <= 1) ? isBalanced(root->left) && isBalanced(root->right) : false;
    }
};
