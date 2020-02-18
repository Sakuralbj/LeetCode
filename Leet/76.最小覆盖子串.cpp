/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 最小覆盖子串
 */

// @lc code=start
#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()){
            return "";
        }
        
        int left=0,right=0;
        int start=0;
        int minlen=INT32_MAX;
        map<char,int>mp;
        map<char,int>mptmp;
        for(auto s1:t){
            mp[s1]++;
            
        }
        int match=0;
        while (right<s.size())
        {
            
            if(mp.count(s[right])){
                mptmp[s[right]]++;
                if(mptmp[s[right]]==mp[s[right]]){
                    match++;
                }
            }
            right++;
            
            while (match==mp.size())
            {   
                if(right-left<minlen){
                minlen=right-left;
                start=left;
            }
                if(mp.count(s[left])){
                    mptmp[s[left]]--;
                    if(mptmp[s[left]]<mp[s[left]]){
                        match--;
                    }
                    

                }
                left++;
                
            }
            
            

        }
        
        if(minlen==INT32_MAX){
            return "";
        }
        
        return s.substr(start,minlen);
        
        

    }
};
// @lc code=end

