/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0){
            return NULL;
        }
        return buildTreehelp(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);

        
    }
    TreeNode* buildTreehelp(vector<int>& preorder, vector<int>& inorder,int pl,int pr,int il,int ir){
        if(pl>pr){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(preorder[pl]);
        int i=0;
        for ( i = il; i <= ir; i++)
        {
            if(inorder[i]==root->val){
                break;
            }
        }
        cout<<i<<endl;
        root->left=buildTreehelp(preorder,inorder,pl+1,pl+i-il,il,i-1);
        root->right=buildTreehelp(preorder,inorder,pl+i-il+1,pr,i+1,ir);
        return root;
        
    }
};
// @lc code=end

