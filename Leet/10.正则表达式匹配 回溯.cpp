/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {

       bool result=isMatchhelp(s,p);
       return result;

        
    }
    bool isMatchhelp(string s, string p){
        bool firstmatch=((s[0]==p[0])||(p[0]=='.'))&&(s.length()!=0);
        
        if (p.length()==0)
        {
            return (s.length()==0);
        }
        if (p.length()>1&&p[1]=='*')
        {   
            return (firstmatch&&isMatchhelp(s.substr(1,s.length()-1),p))||(isMatchhelp(s,p.substr(2,p.length()-2)));
            
        }else
        {
            return firstmatch&&isMatchhelp(s.substr(1,s.length()-1),p.substr(1,p.length()-1));
        }
        
        
        
    }
};
// @lc code=end

