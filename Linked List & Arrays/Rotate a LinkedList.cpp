class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || head->next==NULL || k==0) return head;
        int size=1;
        ListNode* curr=head;
        while(curr->next)
        {
            size++;
            curr=curr->next;
        }
        ListNode* tail=curr;
        curr->next=head;
        int diff=size-(k%size);
        while(diff--)
        
            curr=curr->next;
            
        
        
        tail->next=head;
        head=curr->next;
        curr->next=NULL;
        return head;
        
    
    }
};
