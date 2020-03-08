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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast=head;
        ListNode* slow=new ListNode(-1);
        slow->next=head;
        ListNode* headnode=slow;

        while(n>0){
            fast=fast->next;
            n--;
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* tmp=slow->next;
        slow->next=slow->next->next;
        if(tmp!=NULL){
        delete(tmp);
        }
        return headnode->next;



    }
};