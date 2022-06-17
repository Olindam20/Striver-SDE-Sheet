class Solution {
    ListNode* revLL(ListNode* head)
    {
        ListNode *pre=NULL,*nex;
        while(head)
        {
            nex=head->next;
            head->next=pre;
            pre=head;
            head=nex;
        }
        return pre;
    }
public:
    bool isPalindrome(ListNode* head) {
       if(!head || !head->next) return true;
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=revLL(slow->next);
        slow=slow->next;
        while(slow)
        {
            if(slow->val!=head->val) return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};