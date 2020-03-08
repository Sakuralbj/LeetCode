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

分治法：
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        if(lists.size()==1){
            return lists[0];
        }

        return mergehelp(lists, 0, lists.size()-1);

    }
    
    ListNode* mergehelp(vector<ListNode*>& lists,int left,int right){
        if(left==right){
            return lists[left];
        }
        int mid=(right-left)/2+left;
        cout<<mid<<endl;
        ListNode* l=mergehelp(lists, left, mid);
        ListNode* r=mergehelp(lists, mid+1, right);
        return merge(l,r);

    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val<l2->val){
            l1->next=merge(l1->next, l2);
            return l1;
        }else{
            l2->next=merge(l1, l2->next);
            return l2;
        }

        }


    

};