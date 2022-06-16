class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *fast=head,*slow=head,*prev=new ListNode();
        prev->next=head;
        ListNode *dummy=prev;
        while(n--)
        {
            fast=fast->next;
        }
        while(fast)
        {
            slow=slow->next;
            fast=fast->next;
            prev=prev->next;
        }
        
        prev->next=slow->next;
        return dummy->next;
        
    }
};
