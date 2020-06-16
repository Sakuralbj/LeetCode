/*
 * @lc app=leetcode.cn id=30 lang=cpp
 *
 * [30] 串联所有单词的子串
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        map<string,int>mpword;
        vector<int>ans;
        if(words.size()==0){
            return ans;
        }
        
        
        for(auto it:words){
            mpword[it]++;
        }
        int len=s.size();
        int wordsize=words[0].size();
        for(int i=0;i<wordsize;i++){
            int count=0;
            map<string,int>mp;
            int left=i,right=i;
            while(right+words[0].size()<=s.size()){
            string tmp=s.substr(right,wordsize);
            right=right+wordsize;
            if(mpword.count(tmp)==0){
                left=right;
                count=0;
                mp.clear();
                continue;
                
            }
            mp[tmp]++;
            count++;
           
            while(mp[tmp]>mpword[tmp]){
                string lefttmp=s.substr(left,wordsize);
                mp[lefttmp]--;
                left=left+wordsize;
                count--;
                

            }
            
            if(count==words.size()){
                ans.push_back(left);
            }


            
        }

    }
    return ans;
    }
};
// @lc code=end

