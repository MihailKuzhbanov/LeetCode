//task 19
//4ms 8.4mb

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *right(head), *left(head);
        while (n--)
        {
            right = right->next;

        }
        if (!right) return head->next;
        while(right->next)
        {
            right = right->next;
            left = left->next;
        }
        left->next = left->next->next;
        return head;
    }
};
