//task 83
//16ms 9.3mb

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* temp = head;
        while (temp) (temp->next && temp->val == temp->next->val) ? temp->next = temp->next->next : temp = temp->next;
        return head;
    }
};
