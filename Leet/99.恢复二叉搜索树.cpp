/*
 * @lc app=leetcode.cn id=99 lang=cpp
 *
 * [99] 恢复二叉搜索树
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
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<TreeNode*>tmp;
    void recoverTree(TreeNode* root) {
        inorder(root);
        int pre=-100;
        TreeNode* x1;
        TreeNode* x2;
       
        int i;
        int j;
        for ( i = 0; i < tmp.size(); i++)
        {
            if(tmp[i]->val>tmp[i+1]->val){
                x1=tmp[i];
                break;
            }
        }
        for ( j = i+1; j < tmp.size(); j++)
        {
            if(tmp[j]->val>x1->val){
                break;
            }
        }
        x2=tmp[j-1];
        int temp=x2->val;
        x2->val=x1->val;
        x1->val=temp;
        

        
        

        
    }
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        tmp.push_back(root);
        inorder(root->right);
        return;
    }
};
// @lc code=end

