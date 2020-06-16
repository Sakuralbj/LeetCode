#include<iostream>
using namespace std;
struct LinkNode {
  int value;
  struct LinkNode * next;
};
struct LinkNode * merge( struct LinkNode * firstLink, struct LinkNode * secondLink ){
    LinkNode* head=new LinkNode;
    if(firstLink->value<secondLink->value){
        head->value=firstLink->value;
        head->next=merge(firstLink->next,secondLink);
    }else{
        head->value=secondLink->value;
        head->next=merge(firstLink,secondLink->next);
    }
    return head;
}