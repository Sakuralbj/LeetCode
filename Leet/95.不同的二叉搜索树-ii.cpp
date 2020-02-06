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
    vector<TreeNode*>ans;
    
    return n==0?ans:generatehelp(1,n);
    }

    vector<TreeNode*>generatehelp(int start,int end){
    vector<TreeNode*>tmp;
    if(start>end){
        tmp.push_back(NULL);
        return tmp;
    }
    for (int i = start; i <=end; i++)
    {   
        vector<TreeNode*> tmp1=generatehelp(start,i-1);
        vector<TreeNode*> tmp2=generatehelp(i+1,end);
        for (int k = 0; k <tmp1.size(); k++)
        {   
            
            for (int j = 0; j < tmp2.size(); j++)
            {   TreeNode* root=new TreeNode(i);
        
                root->left=tmp1[k];
                root->right=tmp2[j];
                tmp.push_back(root);
            }
            
        }
        
    }
    return tmp;
    }
        
    
};
// @lc code=end

