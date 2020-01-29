/*
 * @lc app=leetcode.cn id=91 lang=cpp
 *
 * [91] 解码方法
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
public:
    int numDecodings(string s) {
        int len=s.size();
        if(s[0]=='0'){
        return 0;}
        if(s.size()==1){
            return (s[0]=='0')?0:1;
        }
        int d[len];
        
        int tmp;
        d[0]=1;
       
       
        if (s[1]=='0')
        {
            d[1]=(s[0]-'0')>2 ? 0:1;
            }else
            {
                tmp=10*(s[0]-'0')+s[1]-'0';
                
                d[1]=(tmp<=26)?2:1;
            }
            
            
        
        
        
        
        for (int i = 2; i < len; i++)
        {   
            if(s[i]=='0'&&s[i-1]=='0'){
                return 0;
            }else if(s[i]=='0')
            {
                d[i]=(s[i-1]-'0')>2 ? 0:d[i-2];
            }else if(s[i-1]=='0')
            {
                d[i]=d[i-1];
            }else
            {   
                tmp=10*(s[i-1]-'0')+s[i]-'0';
                d[i]=d[i-1]+((tmp>26)?0:d[i-2]);
                cout<<d[1]<<endl;
                cout<<d[2];
            }
            
            
            
            
            
            
        }
        return d[len-1];
        
        
        

        
    }
};
// @lc code=end

