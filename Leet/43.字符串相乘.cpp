/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        string result="";
        string tmp;
        if(num1[0]=='0'||num2[0]=='0'){
            result=result+'0';
            return result;
        }
        for (int i = num2.size()-1; i >=0; i--)
        {
            if (num2[i]=='0')
            {
                continue;
            }
            string s2="";
            for (int j = 0; j < num2.size()-i-1; j++)
            {
                s2=s2+'0';
            }
            tmp=multiplyhelper(num1,num2[i]-'0')+s2;
            
            result=addhelper(result,tmp);
           
            
        }
        return result;

        
        
    }
    string addhelper(string result,string tmp){
        string s="";
        int i=result.size()-1;
        int j=tmp.size()-1;
        int pre=0;
        while (i>=0&&j>=0)
        {
            int temp=(result[i]-'0')+ (tmp[j]-'0')+pre;
            char c=temp%10+'0';
            s=c+s;
            pre=temp/10;
            i--;
            j--;
        }
        while (i>=0)
        {
           int temp=(result[i]-'0')+pre;
            char c=temp%10+'0';
            s=c+s;
            pre=temp/10;
            i--;
        }
        while (j>=0)
        {
           int temp=(tmp[j]-'0')+pre;
            char c=temp%10+'0';
            s=c+s;
            pre=temp/10;
            j--;
        }
        if(pre!=0){
            char c=pre+'0';
            s=c+s;
        }
        return s;
        
    }
    string multiplyhelper(string num1,int multinum){
        string s="";
        int pre=0;
        for (int i = num1.size()-1; i >=0 ; i--)
        {
            int temp=(num1[i]-'0')*multinum;
            char c=(temp+pre)%10+'0';
            s=c+s;
            pre=(temp+pre)/10;

                    
            
        }
        if(pre!=0){
            //char c=pre+'0';
            s=char(pre+'0')+s;
            
        }
        return s;
        
        
    }
};
// @lc code=end

