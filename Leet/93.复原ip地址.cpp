/*
 * @lc app=leetcode.cn id=93 lang=cpp
 *
 * [93] 复原IP地址
 */

// @lc code=start
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string>ans;
    vector<string> restoreIpAddresses(string s) {
        string tmp;
        restorehelp(s,tmp,0,0);
        return ans;

        
    }
    void restorehelp(string s,string tmp,int start,int index){
        if(index==4){
            ans.push_back(tmp);
            return;
        }
        if(index==3){
            int x=0;
            string s1="";
            for (int j = start; j < s.size(); j++)
            {   x=10*x;
                x+=s[j]-'0';
                s1+=s[j];
            }
            if(x>255||s.size()-start-1>3||(s1[0]=='0'&&s1.size()>1)){
                return;

            }
            tmp=tmp+s1;
            restorehelp(s,tmp,start,index+1);
        }else{
        for (int i = 0; i < 3; i++)
        {
            int x=0;
            string s1="";
            for (int j = start; j <= start+i; j++)
            {   x=10*x;
                x+=s[j]-'0';
                s1=s1+s[j];
            }
            if(x>255||s.size()-start-i-1>3*(3-index)||(s1[0]=='0'&&s1.size()>1)){
                continue;

            }
            tmp=tmp+s1+'.';
            cout<<tmp.c_str()<<endl;
            restorehelp(s,tmp,start+i+1,index+1);
            tmp=tmp.substr(0,tmp.size()-i-2);
            
            
        }
        }
    }
    
};
// @lc code=end

