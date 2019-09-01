//task 23
//20ms 11.7mb

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        map<int, int> temp;
        ListNode head(0);
        ListNode* result = &head;

        for (auto node : lists)
        {
            while(node != NULL)
            {
                temp[node->val]++;
                node=node->next;
            }
        }

        for (auto count : temp)
        {
            while(count.second--)
            {
                result->next = new ListNode(count.first);
                result = result -> next;
            }
        }

        return head.next;
    }
};
