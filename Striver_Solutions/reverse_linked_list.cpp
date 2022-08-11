class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *prev = NULL;
        ListNode *temp = head;
        ListNode *next = NULL;
        while (temp != NULL)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
};