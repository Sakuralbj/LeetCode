/*
 * @lc app=leetcode.cn id=71 lang=cpp
 *
 * [71] 简化路径
 */

// @lc code=start
#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<sstream>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        vector<string>st;
        stringstream s(path);
        string tmp="";
        string ans="";
        while (getline(s,tmp,'/'))
        {
            if(tmp==""||tmp=="."){
                continue;
            }else if(tmp==".."){
                if(!st.empty()){
                    st.pop_back();
                }
            }else
            {
                st.push_back(tmp);
            }
            
        }
        for (int i = 0; i < st.size(); i++)
        {
            ans=ans+'/';
            ans=ans+st[i];
        }
        if(ans==""){
            ans=ans+'/';
        }
        
        return ans;
        
    }

                    
                    

                
            
            

        
        
        
    
};
// @lc code=end

