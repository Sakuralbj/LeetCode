/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层次遍历
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
#include<queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {   int l=q.size();
            vector<int>tmp;
            for (int i = 0; i < l; i++)
            {
                TreeNode* t=q.front();
                tmp.push_back(t->val);
                q.pop();
                if(t->left!=NULL){
                q.push(t->left);
            }
                if(t->right!=NULL){
                q.push(t->right);
            }
                
            }
            ans.push_back(tmp);
            
            

        }
        return ans;
        
        
    }
};
// @lc code=end

