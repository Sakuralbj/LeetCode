/*
 * @lc app=leetcode.cn id=95 lang=cpp
 *
 * [95] 不同的二叉搜索树 II
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
    vector<TreeNode*> generateTrees(int n) {
    TreeNode* root;
    vector<TreeNode*>tmp;
    }

    vector<TreeNode*>generatehelp(int start,int end){
    TreeNode* root;
    for (int i = start; i <=end; i++)
    {
        vector<TreeNode*> tmp1=generatehelp(start,i-1);
        vector<TreeNode*> tmp2=generatehelp(i+1,end);
        
    }
    }
        
    }
};
// @lc code=end

