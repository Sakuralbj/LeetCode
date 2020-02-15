/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

// @lc code=start
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
    bool isBalanced(TreeNode* root) {
        return balancehelp(root)!=-1;

        
    }
    int balancehelp(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=balancehelp(root->left);
        if(left==-1){
            return -1;
        }
        int right=balancehelp(root->right);
        if(right==-1){
            return -1;
        }
        return abs(left-right)<=1?max(left,right)+1:-1;
        
    }
};
// @lc code=end

