/*
 * @lc app=leetcode.cn id=109 lang=cpp
 *
 * [109] 有序链表转换二叉搜索树
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* tail=head;
        while (tail->next!=NULL)
        {   
            tail=tail->next;
        }
        return sorthelp(head,tail);
        
        
    }
    TreeNode* sorthelp(ListNode* head,ListNode* tail){
        if(head==tail){
            return new TreeNode(head->val);
        }
        if(tail==NULL){
            return NULL;
        }
        ListNode* pre=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast!=tail&&fast->next!=tail)
        {
            fast=fast->next->next;
            pre=slow;
            slow=slow->next;
            
        }
        TreeNode* root=new TreeNode(0);
        root->val=slow->val;
        root->left=sorthelp(head,pre);
        root->right=sorthelp(slow->next,tail);
        return root;



    }
};
// @lc code=end

