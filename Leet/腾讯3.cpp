struct LinkNode {
int val;
struct LinkNode * next;
};
void remove( LinkNode * head ){
    if(!head) return ;
    LinkNode * p=head;
    while(p->next){
        if(p->next->val==p->val){
            auto next = p->next;

            p->next = next->next;
            delete next;
        }else p=p->next;
    }
    return ;
}