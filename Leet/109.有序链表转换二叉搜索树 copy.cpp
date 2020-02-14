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
        ListNode* cur=head;
        int size=0;
        while (cur!=NULL)
        {
            size++;
            cur=cur->next;
        }
        return sorthelp(head,0,size-1);
        

        
    }
    TreeNode* sorthelp(ListNode*& head,int start,int end){
        if(start>end){
            return NULL;
        }
        
        int mid=(end-start)/2+start;
        TreeNode* root=new TreeNode(0);
        root->left=sorthelp(head,start,mid-1);
        root->val=head->val;
        head=head->next;

        root->right=sorthelp(head,mid+1,end);
        return root;

    }
};
// @lc code=end

