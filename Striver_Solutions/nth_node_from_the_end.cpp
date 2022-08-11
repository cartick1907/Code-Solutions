class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* start= new ListNode();
        start->next=head;
        ListNode* t1=start;
        ListNode* t2=start;
        while(n--)
            t1=t1->next;
        while(t1->next!=NULL){
            cout<<t1->val<<" "<<t2->val<<endl;
            t2=t2->next;
            t1=t1->next;
        }
        t2->next=t2->next->next;
        return start->next;
    }
};