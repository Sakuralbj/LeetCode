/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()==0||postorder.size()==0){
            return NULL;
        }
        return buildTreehelp(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);

        
    }
    TreeNode* buildTreehelp(vector<int>& inorder, vector<int>& postorder,int il,int ir,int pl,int pr){
        if(pl>pr||il>ir){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(postorder[pr]);
        int i=0;
        for ( i = il; i <= ir; i++)
        {
            if(inorder[i]==root->val){
                break;
            }
        }
        int left=i-il-1;
        root->left=buildTreehelp(inorder,postorder,il,i-1,pl,pl+left);
        root->right=buildTreehelp(inorder,postorder,i+1,ir,pl+left+1,pr-1);
        return root;
        
    }
};


// @lc code=end

