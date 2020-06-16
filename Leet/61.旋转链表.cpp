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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* cur=head;
        int count=0;
        if(head==nullptr||head->next==NULL){
            return head;
        }
        while(cur->next!=nullptr){
            cur=cur->next;
         
            count++;
        }
        count++;
        
        k=k%count;
        if(k==0){
            return head;
        }
        cur->next=head;
        
        
        int len=count-k-1;
        cur=head;
        while(len>0){
            cur=cur->next;
            len--;
        }
        ListNode* tmp=cur->next;
        cur->next=NULL;
        return tmp;
        



    }
};