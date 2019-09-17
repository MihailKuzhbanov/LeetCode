//task 141
//12ms 9.7ms

class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        ListNode * slow = head, * fast = head;

        while (slow && fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) return true;
        }
        return false;
    }
};


/*some variants, which I found*/
//O(1) solution - not optimal, but constant - 8ms 9.9mb
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int t = 8500;
        while(t--){
            if(head==NULL)return false;
            head=head->next;
        }
        return true;
    }
};

//consecutive memory case - don't works in this case
class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        if (!head) return false;
        ListNode * temp = head;
        while (true)
        {
            if (!temp->next) return false;
            if (temp->next <= temp) return true;
            head = head->next;
        }
        return false;
    }
};
