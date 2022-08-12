class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return head;

        int len = 1;
        ListNode *tail = head;
        while (tail->next)
        {
            tail = tail->next;
            len++;
        }
        // cout<<len;
        k = k % len;
        tail->next = head;

        ListNode *ans = head;
        for (int i = 0; i < (len - k); i++)
        {
            ans = ans->next;
        }

        tail = ans;
        for (int i = 0; i < len - 1; i++)
        {
            tail = tail->next;
            cout << tail->val << endl;
        }
        tail->next = NULL;
        return ans;
    }
};