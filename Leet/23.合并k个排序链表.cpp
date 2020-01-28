/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个排序链表
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
#include<vector>
using namespace std;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {       
        if(lists.size()==0){
            return NULL;
        }
        if(lists.size()==1){
            return lists[0];
        }
        ListNode* l1=lists[0];
        for (int i = 1; i < lists.size(); i++)
        {
            ListNode* l2=lists[i];
            l1=merge(l1,l2);
        }
        return l1;
        

        
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* head=new ListNode(0);
        ListNode* x=head;
        while (l1&&l2)
        {
            if(l1->val<=l2->val){
                x->next=l1;
                l1=l1->next;
            }else
            {
                x->next=l2;
                l2=l2->next;
            }

            x=x->next;
        }
        x->next=(l1)?l1:l2;
        
            
        
            return head->next;
        }
        
};
// @lc code=end

