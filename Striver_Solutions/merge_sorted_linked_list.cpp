class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *head;

        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        if (l1->val > l2->val)
        {
            head = l2;
            l2 = l2->next;
        }
        else
        {
            head = l1;
            l1 = l1->next;
        }
        ListNode *ans = head;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val > l2->val)
            {
                ListNode *temp = l2->next;
                head->next = l2;
                l2 = temp;
            }
            else
            {
                ListNode *temp = l1->next;
                head->next = l1;
                l1 = temp;
            }
            head = head->next;
        }
        if (l2 != NULL)
        {
            head->next = l2;
        }
        if (l1 != NULL)
        {
            head->next = l1;
        }
        return ans;
    }
};