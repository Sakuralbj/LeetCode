/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        return maxhelp(root,1);

        
    }
    int maxhelp(TreeNode* root,int depth){
        if(root==NULL){
            return depth-1;
        }
        return max(maxhelp(root->left,depth+1),maxhelp(root->right,depth+1));
    }
};
// @lc code=end

