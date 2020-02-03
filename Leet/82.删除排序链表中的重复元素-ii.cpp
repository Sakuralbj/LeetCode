/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
 */

// @lc code=start
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pre=new ListNode(0);
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *curr=head;
        ListNode* headnode=pre;
        headnode->next=head;
        while (curr!=NULL)
        {
            if(curr->next!=NULL&&curr->next->val==curr->val){
               while (curr->next!=NULL&&curr->next->val==curr->val)
               {
                   curr=curr->next;
               }
               pre->next=curr->next;
               curr=curr->next;
               
            }else
            {
                pre=curr;
                curr=curr->next;
            }
            
        } 
       
            
            
        
        return headnode->next;
        

    }
};
// @lc code=end

