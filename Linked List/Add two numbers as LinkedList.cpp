class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp=new ListNode();
        ListNode *p=temp;
        int carry=0;
        while(l1 || l2 || carry)
        {
            int sum=0;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            p->next=new ListNode((sum+carry)%10);
            p=p->next;
            carry=(sum+carry)/10;
        }
            return temp->next;
        
    }
};
 