//task 100
//0ms 9.7mb

/*
 * Definition for a binary tree node.
 * struct TreeNode
 * {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//external funtion use
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        return isSamePart(p, q);
    }

    bool isSamePart(TreeNode* p, TreeNode* q)
    {
        if( (p && !q) || (!p && q)) return false;
        if(!p && !q) return true;
        return (p->val == q->val) && isSamePart(p->left, q->left) && isSamePart(p->right, q->right);
    }
};

//without external function
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(!p && !q)    return true;
        if(!p || !q)    return false;
        if(p->val != q->val)    return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }

};
