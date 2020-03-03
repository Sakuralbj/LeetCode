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
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL){
            return 0;
        }
        stack<TreeNode*>st;
        TreeNode* cur=root;
        while(!st.empty()||cur!=NULL){
            while(cur!=NULL){
                st.push(cur);
                cur=cur->left;
            }
            cur=st.top();
            st.pop();
            k--;
            if(k==0){
                return cur->val;
            }
            cur=cur->right;
        }
            return -1;

        }
        
};