class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1) return head;
        ListNode *dummy=new ListNode();
        dummy->next=head;
        ListNode *curr=dummy,*nex=dummy,*prev=dummy;
        
        int len=0;
        while(curr->next)
        {
            curr=curr->next;
            len++;
        }
        
        while(len>=k)
        {
            curr=prev->next;
            nex=curr->next;
            for(int i=1;i<k;i++)
            {
                curr->next=nex->next;
                nex->next=prev->next;
                prev->next=nex;
                nex=curr->next;
            }
            prev=curr;
            len-=k;
        }
        return dummy->next;
    }
};