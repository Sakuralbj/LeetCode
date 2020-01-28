/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
#include<iostream>
using namespace std;
#include<vector>
    class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            vector<string>result;
            if(digits.length()==0)
            {
                return result;
            }
            string phone[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            //vector<string> phone = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        
            int now=digits[0] - '0';
            string temp1        =phone[now-2];
            vector<string>next=letterCombinations(digits.erase(0, 1));

            for (int i = 0; i < temp1.size(); i++)  
            {    string temp="";
                temp=temp+temp1[i];                                 
                for (int k = 0; k < next.size(); ++k) {
                 temp =     temp1[i]       + next[k];
                 result.push_back(temp);
            }

            if(next.size()==0) {                           
                result.push_back(temp);
            }
            }

            return result;
            
            


            
        }
    };
// @lc code=end

