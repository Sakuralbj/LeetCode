/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
#include<iostream>
#include<string>
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length()-1;
        int ans=0;
        int i=0;
        int j=0;
        for ( i = len; i >= 0; i--)
        {
            if(s[i]!=' '){
                break;
            }
           
        }
        for ( j = i; j >= 0; j--)
        {
            if(s[j]==' '){
                break;
            }
        }
        
        return i-j;
        
        
    }
};
// @lc code=end

