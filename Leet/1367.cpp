class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        queue<TreeNode*>qt;
        qt.push(root);
    
        while(!qt.empty()){
            TreeNode* top=qt.front();
            if(top->left!=NULL){
                qt.push(top->left);
            }
            if(top->right!=NULL){
                qt.push(top->right);
            }
            qt.pop();
            if(dfs(top,head)){
                return true;
            }
            
        }
        return false;

    }
    bool dfs(TreeNode* top,ListNode* root){
        if(root==NULL){
            return true;
        }
        if(top==NULL){
            return false;
        }
        if(top->val!=root->val){
            return false;
        }
        return dfs(top->left,root->next)||dfs(top->right,root->next);
        
    }
};