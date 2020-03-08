迭代:
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* pre=dummy;
        while(l1!=NULL&&l2!=nullptr){
            if(l1->val<l2->val){
                pre->next=l1;
                pre=pre->next;
                l1=l1->next;
            }else{
                pre->next=l2;
                l2=l2->next;
                pre=pre->next;
            }
        }
        pre->next=(l1==NULL)?l2:l1;
        return dummy->next;

    }
};

递归:
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val<l2->val){
            l1->next=mergeTwoLists(l1->next, l2);
            return l1;
        }else{
            l2->next=mergeTwoLists(l1, l2->next);
            return l2;
        }

        }

    
};