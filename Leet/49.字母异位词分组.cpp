/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mp;
        for (auto s:strs)
        {
            string tmp=s;
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(s);

        }
        auto m=mp.begin();
        while (m!=mp.end())
        {
            ans.push_back(m->second);
            m++;
        
        }
       
           
        return ans; 
        
        
        
    }
};
// @lc code=end

