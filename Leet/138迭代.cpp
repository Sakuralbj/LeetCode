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
private:
    map<Node*,Node*>mp;
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        Node* tmp=head;
        Node* newnode=new Node(head->val);
        mp[head]=newnode;
        while(head!=NULL){
            newnode->next=getcloneNode(head->next);
            newnode->random=getcloneNode(head->random);
            
            head=head->next;
            newnode=newnode->next;

        }
        return mp[tmp];
    }
    Node* getcloneNode(Node* head){
        if(head==NULL){
            return NULL;
        }
        if(mp.count(head)==1){
            return mp[head];
        }
        Node* newnode=new Node(head->val);
        mp[head]=newnode;
        return newnode;
        

    }
    
        
        



        
    
};