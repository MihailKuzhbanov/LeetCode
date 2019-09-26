//task 107
//8ms 14.7mb

class Solution {
public:
    void PushBranch(vector<vector<int>> &input, TreeNode* node, int depth)
    {
        if (!node) return;
        if (depth >= input.size()) input.push_back({});
        input[depth].push_back(node->val);
        depth++;
        PushBranch(input, node->left, depth);
        PushBranch(input, node->right, depth);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        vector<vector<int>> result;
        PushBranch(result, root, 0);
        reverse(result.begin(), result.end());
        return result;
    }
};
