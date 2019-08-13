//task 2
//16ms 10.4mb

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode result(0);
        ListNode* ptr = &result;
        int sum = 0;
        while (l1 || l2 || sum)
        {
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            ptr->next = new ListNode(sum % 10);
            sum /= 10;
            ptr = ptr->next;
        }
        return result.next;
    }
};
