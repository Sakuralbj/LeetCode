//
// Created by 马建波 on 2019-11-26.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

#include <vector>
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        vector<int>left;
        vector<int>right;
        if(root==NULL){
            return result;
        }
        left=inorderTraversal(root->left);
        right=inorderTraversal(root->right);
        for (int i = 0; i <left.size() ; ++i) {
            result.push_back(left[i]);
        }
        result.push_back(root->val);
        for (int i = 0; i <right.size() ; ++i) {
            result.push_back(right[i]);
        }
        return result;


    }
};