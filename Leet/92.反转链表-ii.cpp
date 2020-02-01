/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
 */

// @lc code=start

//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode(int x) : val(x), next(NULL) {}
//   };
 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* p=head;
        ListNode* tmp=new ListNode(0);
        ListNode* next;
        ListNode* pre=new ListNode(0);
        int x=n-m;
        int q=m;
        if(m==1&&n==1){
            return head;
        }
        while (m>1)
        {   tmp=p;
            p=p->next;
            m--;
        }
        ListNode* l=p;
        while (x>=0)
        {
            next=p->next;
            p->next=pre;
            tmp->next=p;
            pre=p;
            p=next;
            x--;
        }
        l->next=next;
        return (q==1)?tmp->next:head;
        

        
    }
};
// @lc code=end

