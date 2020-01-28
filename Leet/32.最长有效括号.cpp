/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

    class Solution {
    public: 
        int longestValidParentheses(string s) {
                int len=s.length();
                if(len<=1){
                    return 0;
                }
                int d[len]={0};

                int maxsize=0;
            
                for (int i = 1; i < len; i++)
                {   if(s[i]=='('){
                     continue;
                }
                        if(s[i-1]=='('){
        
                            d[i]=(i==1)? 2:d[i-2]+2;
                        }else if(i - d[i - 1] > 0 &&s[i-d[i-1]-1]=='(')
                        {   
                            d[i]=d[i-1]+(((i - d[i - 1]) >=2) ?  d[i-d[i-1]-2] : 0)+2;
                           
                            
                        }
                        
                        
                        
                    
                    cout<<"i="<<" "<<i<<" "<<"d[i]="<<""<<d[i]<<endl;
                    if(d[i]>maxsize){
                        maxsize=d[i];
                    }
                    
                    
                }
                return maxsize;
                
                


            
        }
    };
// @lc code=end

