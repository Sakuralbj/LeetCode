/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] 二叉树展开为链表
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
    void flatten(TreeNode* root) {
        while (root!=NULL)
        {
            if(root->left!=NULL){
                auto pre=root->left;
                while (pre->right!=NULL)
                {
                    pre=pre->right;
                }
                pre->right=root->right;
                root->right=root->left;
                root->left=NULL;
                
            }
            root=root->right;
        }
        
        

        
    }
};
// @lc code=end

