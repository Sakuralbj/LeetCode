/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* headnode=new ListNode(-1);
        ListNode* curr=headnode;
        ListNode *cur1=l1,*cur2=l2;
        int carry=0;
        int sum=0;
        
        while(cur1!=NULL||cur2!=NULL){
            
            int num1=(cur1==NULL)?0:cur1->val;
            int num2=(cur2==NULL)?0:cur2->val;
            sum=(num1+num2+carry)%10;
            carry=(num1+num2+carry)/10;
            ListNode *node=new ListNode(sum);
            curr->next=node;
            curr=node;
            if(cur1!=NULL){
            cur1=cur1->next;}
            if(cur2!=NULL){
            cur2=cur2->next;}
            

        }
        if(carry==0){
            curr->next=NULL;
        }else{
            curr->next=new ListNode(carry);
        }
        return headnode->next;


    }
};