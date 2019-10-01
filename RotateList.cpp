//task 61
//8ms 9mb

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head == NULL || head->next == NULL || k == 0) return head;

        ListNode* temp = head;
        int size = 1;
        while(temp->next != NULL)
        {
            size++;
            temp = temp->next;
        }
        temp->next = head;
        k = k % size;
        while(--size >= k)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
