class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* curr=head,*prev=NULL;
        
        while(curr)
        {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
