class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *prev = NULL;
        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                break;
            }
        }
        // cout<<slow->val<<" "<<fast->val<<endl;
        if (fast == NULL || fast->next == NULL)
            return NULL;
        fast = head;
        while (slow != fast)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        // cout<<prev->val<<endl;
        return prev->next;
    }
};