/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 报数
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string countAndSay(int n) { 
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        string d[31]={""};
        d[1]="1";
        d[2]="11";
        for (int i = 3; i <= n; i++)
        {
            string s=d[i-1];
            int pre=0;
            for(int j=0;j<s.size();j++){
                if(j==0){
                    continue;
                }
                if(j==s.size()-1){
                    if(s[j]!=s[j-1]){
                    int tmp=(j-pre);
                    d[i]=d[i]+char(tmp+'0');
                    d[i]=d[i]+s[j-1];
                    d[i]=d[i]+'1';
                    d[i]=d[i]+s[j];
                    }else
                    {
                        int tmp=(j-pre+1);
                        d[i]=d[i]+char(tmp+'0');
                        d[i]=d[i]+s[j];
                    }
                    break;
                    
                }
                if(s[j]!=s[j-1]){
                    int tmp=(j-pre);
                    d[i]=d[i]+char(tmp+'0');
                    d[i]=d[i]+s[j-1];
                    pre=j;
                }
            }
        }
        return d[n];
        
        
    }
};
// @lc code=end

