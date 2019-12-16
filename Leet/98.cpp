
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool flag1=isValidBST(root->left);
        bool flag2=isValidBST(root->right);
        if(flag1==false||flag2==false){
            return false;
        }
        bool l1=false;
        bool l2=false;
        TreeNode *l=root->left;
        TreeNode *r=root->right;
        if(l==NULL){
            l1=true;
        }else
        {
           while (l->right!=NULL)
        {
           l=l->right;
        }
        if(l->val<=root->val){
            l1=true;
        }
        }
        
        if(r==NULL){
            l2=true;
        }else
        {
             while (r->left!=NULL)
        {
           r=r->left;
        }
        if(r->val>=root->val){
            l2=true;
        }
        }
        if(l1&&l2){
            return true;
        }else
        {
            return false;
        }
        
    
        
        


        
    }
};