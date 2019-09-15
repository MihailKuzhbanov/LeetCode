//task 109

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//slow, but based on previous solution - 40ms 30.3mb
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

    TreeNode* sortedListToBST(ListNode* head)
    {
        if (!head) return NULL;
        vector<int> container;
        while(head)
        {
            container.push_back(head->val);
            head = head->next;
        }
        return sortedArrayToBST(container);
    }
};

//fast, recursively - 32ms 25.4mb
class Solution {
public:
TreeNode* sortedListToBST(ListNode* head)
  {
      if(!head) return NULL;
      if(!head->next) return new TreeNode(head->val);
      ListNode* slow = head;
      ListNode* fast = head->next;
      ListNode* pre = new ListNode(0);
      pre->next = slow;

      while(fast)
      {
          slow = slow->next;
          pre = pre->next;
          fast = fast->next ? fast->next->next : NULL;
      }
      TreeNode* root = new TreeNode(slow->val);
      pre->next = NULL;

      root->left = sortedListToBST(head);
      root->right = sortedListToBST(slow->next);
      return root;
  }
}
