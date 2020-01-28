/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
            int len=needle.size();
            if(len==0){
                return 0;
            }
            char c=needle[0];
            for (int i = 0; i < haystack.size(); i++)
            {
                if(haystack[i]==c){
                    if(judge(haystack,needle,i,len)){
                        return i;
                    }
                }
            }
            return -1;
            
        
    }
    bool judge(string haystack,string needle,int index,int len){
        if(index+len>haystack.size()){
            return false;
        }
        for (int i = index; i < index+len; i++)
        {
            if(haystack[i]!=needle[i-index]){
                return false;
            }
        }
        return true;
        
    }
};
// @lc code=end

