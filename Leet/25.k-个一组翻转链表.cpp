/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
 */

// @lc code=start


 
            class Solution {
            public:
                ListNode* reverseKGroup(ListNode* head, int k) {
                    ListNode* cur=head;
                    ListNode* next;
                    ListNode* temp;
                    ListNode* headtemp;
                    ListNode* precur=new ListNode(0);
                    ListNode* pre=new ListNode(0);
                    ListNode* result=precur;
                    int len=0;
                    
                    if(head==NULL||k==1){
                        return head;
                    }
                    while (cur!=NULL)
                    {
                    cur=cur->next;
                    len++;
                    }
                    cur=head;
                    int m=len/k;
                    int n=len%k;  
                    for (int i = 0; i < m ;i++)
                    {    
                        headtemp=precur;
                        precur=cur;
                        
                        for (int j = 0; j < k; j++)
                        {   temp=cur->next;
                            headtemp->next=cur;
                            cur->next=pre;
                            pre=cur;
                            cur=temp;
                        }
                    }
                    if(n==0){
                        precur->next=NULL;
                        return result->next;
                    }else
                    {
                        precur->next=cur;
                        return result->next;

                    }
                    
                        

                        

                    }
                    
            
            


            
            
        
    };
// @lc code=end

递归:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* tmp=head;
        while(tmp!=NULL){
            count++;
            tmp=tmp->next;
        }
        return reversehelp(head,count,k);

    }
    ListNode* reversehelp(ListNode* head,int len,int k){
        if(len<k){
            return head;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode  *tmp,*curr=head;
        ListNode* start=head;
        for(int i=0;i<k;i++){
            tmp=curr->next;
            curr->next=dummy->next;
            dummy->next=curr;
            curr=tmp;
        }
        start->next=reversehelp(tmp,len-k,  k);
        return dummy->next;
        
    }
};