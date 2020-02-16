/*
 * @lc app=leetcode.cn id=116 lang=cpp
 *
 * [116] 填充每个节点的下一个右侧节点指针
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
#include<iostream>
#include<queue>
using namespace std;
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){
            return NULL;
        }
        queue<Node*>qt;
        qt.push(root);
        while (!qt.empty())
        {   
            int size=qt.size();
            for (int i = 0; i < size; i++)
            {
                Node* cur=qt.front();
                qt.pop();
                if(cur->left!=NULL){
                qt.push(cur->left);
            }
                if(cur->right!=NULL){
                qt.push(cur->right);
            }   
                cur->next=(i==size-1)?NULL:(qt.front());
    
            }
            

            
           

        }
        return root;
        

        
    }
};
// @lc code=end

