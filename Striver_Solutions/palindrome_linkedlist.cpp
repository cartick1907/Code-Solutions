class Solution
{
public:
    ListNode *rev(ListNode *&head)
    {
        ListNode *prev = NULL;
        ListNode *nxt;
        while (head != NULL)
        {
            // cout<<head->val<<endl;
            nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *test = rev(slow);
        ListNode *dummy = head;
        // while(test!=NULL){
        //     cout<<test->val<<endl;
        //     test=test->next;
        // }
        while (test != NULL)
        {
            if (dummy->val != test->val)
            {
                return false;
            }
            test = test->next;
            dummy = dummy->next;
        }
        return true;
    }
};