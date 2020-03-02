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
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
       int lheight=getheight(root->left);
       int rheight=getheight(root->right);
       
       if(lheight==rheight){
           return (1<<lheight)+countNodes(root->right);
       }else{
           return (1<<rheight)+countNodes(root->left);
       }
    }
    int getheight(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return max(getheight(root->left),getheight(root->right))+1;
    }

    
};