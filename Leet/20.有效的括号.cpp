/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
            stack<char> s1;
            if(s.length()==0){
                return true;
            }
            for (int i = 0; i < s.length(); i++)
            {
                if(s[i]=='{'||s[i]=='('||s[i]=='['){
                    s1.push(s[i]);
                }else if(s[i]=='}'){
                    if(s1.empty()||s1.top()!='{'){
                        return false;
                    }else
                    {
                        s1.pop();
                    }
                }else if(s[i]==')'){
                    if(s1.empty()||s1.top()!='('){
                        return false;
                    }else
                    {
                        s1.pop();
                    }
                }else if(s[i]==']'){
                    if(s1.empty()||s1.top()!='['){
                        return false;
                    }else
                    {
                        s1.pop();
                    }
                }
            }
            if(s1.empty()){
                return true;
            }     
            return false;
                    
                
            }
            

        
    
};
// @lc code=end

