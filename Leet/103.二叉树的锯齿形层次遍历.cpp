/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层次遍历
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        int x=0;
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
            if(x%2==0){
            ans.push_back(tmp);
            }
            else
            {   reverse(tmp.begin(),tmp.end());
                ans.push_back(tmp);
            }
            x++;
            
            

        }
        return ans;
    }
};
// @lc code=end

