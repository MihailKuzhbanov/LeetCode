//task 114
//4ms 9.6mb

class Solution {
public:
    TreeNode* GetTail(TreeNode * node)
    {
        TreeNode * tail = node;
        TreeNode * left = node->left;
        TreeNode * right = node->right;
        if (left)
        {
            tail->right = left;
            tail->left = NULL;
            tail = GetTail(left);
        }

        if (right)
        {
            tail->right = right;
            tail->left = NULL;
            tail = GetTail(right);
        }
        return tail;
    }

    void flatten(TreeNode* root)
    {
        if (root) GetTail(root);
    }
};
