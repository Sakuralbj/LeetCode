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

