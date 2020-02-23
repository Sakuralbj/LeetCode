先序迭代:
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        if(root!=NULL){
        st.push(root);
        }
        vector<int>ans;
        while(!st.empty()){
            TreeNode* top=st.top();
            st.pop();
            ans.push_back(top->val);
            if(top->right!=NULL){
                st.push(top->right);
            }
            if(top->left!=NULL){
                st.push(top->left);
            }
        }

        return ans;

    }
};
中序迭代:
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* curr=root;
        vector<int>ans;
        while(curr!=NULL||!st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            curr=curr->right;
        }
        return ans;

    }
};

后序迭代:
1.
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        if(root!=NULL){
            st.push(root);
        }
        while(!st.empty()){
            TreeNode* top=st.top();
            st.pop();
            ans.insert(ans.begin(), top->val);
            if(top->left!=NULL){
            st.push(top->left);}
            if(top->right!=NULL){
                st.push(top->right);
            }
        }
        return ans;

    }
    
};
2.
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode* curr=root;
        TreeNode* last=NULL;
        while(curr!=NULL||!st.empty()){
            if(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }else{
                TreeNode* top=st.top();
                if(top->right!=NULL&&top->right!=last){
                    curr=top->right;
                }else{
                    ans.push_back(top->val);
                    st.pop();
                    last=top;
                }
            }
        }
        return ans;

    }
    
};

