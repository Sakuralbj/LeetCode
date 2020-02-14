/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
#include<queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        while (!q.empty())
        {   vector<int>tmp;
            int size=q.size();
            for (int i = 0; i < size; i++)
            {   if(q.front()->left!=NULL){
                q.push(q.front()->left);
            }   
                if(q.front()->right!=NULL){
                q.push(q.front()->right);
            }
                tmp.push_back(q.front()->val);
                q.pop();
            }
            ans.insert(ans.begin(),tmp);
            
        }
        return ans;
        

        
    }
};
// @lc code=end

