/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return ans;
        }
        vector<int>tmp;
        pathSumhelp(root,sum,tmp);
        return ans;
        
    }
    void pathSumhelp(TreeNode* root, int sum,vector<int>tmp){
        if(sum==root->val&&root->left==NULL&&root->right==NULL){
            tmp.push_back(root->val);
            ans.push_back(tmp);
            return;
        }
        
        if(root->left!=NULL){
            tmp.push_back(root->val);
            cout<<root->val<<endl;
            cout<<sum-root->val<<endl;
            pathSumhelp(root->left,sum-root->val,tmp);
            tmp.pop_back();
        }
         if(root->right!=NULL){
            tmp.push_back(root->val);
            pathSumhelp(root->right,sum-root->val,tmp);
            tmp.pop_back();
        }
    }
};
// @lc code=end

