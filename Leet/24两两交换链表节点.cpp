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
    ListNode* swapPairs(ListNode* head) {
            if(head==NULL){
                return NULL;
            }
            if(head->next==NULL){
                return head;
            }
            ListNode* tmp=head->next;
            head->next=swapPairs(tmp->next);
            tmp->next=head;
            return tmp;
            

    }
};
迭代:
