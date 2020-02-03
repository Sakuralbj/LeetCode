/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<iostream>
using namespace std;
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(head==NULL){
            return head;
        }
        ListNode* p=head;
        ListNode* ans;
        int size=1;
        while (p->next!=NULL)
        {
           p=p->next;
           size++;
        }
       
        if(k%size==0){
            return head;
        }
        k=k-k/size*size;
        ListNode* cur=head;
        ListNode* ne=head;

        while (k>=0)
        {   
            ne=ne->next;
            k--;
        }
        while (ne!=NULL)
        {
            ne=ne->next;
            cur=cur->next;
        }
        ans=cur->next;
        p->next=head;
        
        cur->next=NULL;
        return ans;

        
        

        
        
    }
};
// @lc code=end

