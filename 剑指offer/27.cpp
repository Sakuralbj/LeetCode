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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root==NULL){
            return root;
        }
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* top=st.top();
            st.pop();
            swap(top->left,top->right);
            if(top->left!=NULL){
                st.push(top->left);
            }
            if(top->right!=NULL){
                st.push(top->right);
            }
            

        }
        return root;
        

    }
};