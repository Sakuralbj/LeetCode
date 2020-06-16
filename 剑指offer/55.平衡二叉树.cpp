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
    bool isBalanced(TreeNode* root) {
        int depth=0;
        return isBalancedhelp(root,depth);

    }

    bool isBalancedhelp(TreeNode* root,int &height){
        if(root==NULL){
            height=0;
            return true;
        }
        int left,right;
        if(isBalancedhelp(root->left,left)&&isBalancedhelp(root->right,right)){
            if(abs(left-right)<=1){
                height=max(left,right)+1;
                return true;
            }
            return false;
        }
        return false;
    }
};