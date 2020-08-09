/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
    map<Node*,Node*>mp;
public:
    Node* copyRandomList(Node* head) {
        return DFS(head);
    }
    Node* DFS(Node* head){
        if(head==NULL){
            return NULL;
        }
        if(mp.count(head)==0){
            mp[head]=new Node(head->val);
            mp[head]->next=DFS(head->next);
            mp[head]->random=DFS(head->random);
        }else{
            return mp[head];
        }
        return mp[head];
       

    }
};