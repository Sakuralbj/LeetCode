struct TreeNode {
int value;
struct TreeNode * left, * right;
};
int countNodes(struct TreeNode *root){
    if(!root)return 0;
    return countNodes(root->left)+countNodes(root->right)+1;
}
struct TreeNode * find( struct TreeNode * root,int N ){
    if(countNodes(root->left)==N-1) return root;
    else if(countNodes(root->left)<N-1) return find(root->right,N-1-countNodes(root->left));
    else return find(root->left,N);
}
