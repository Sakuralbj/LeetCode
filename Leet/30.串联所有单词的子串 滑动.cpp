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
        vector<int>ans;
        if(words.size()==0){
            return ans;
        }
        int oneword=words[0].size();
        int wholeword=words.size()*oneword;
        
        map<string,int>mpword;

        for (int i = 0; i < words.size();i++)
        {   if(mpword.count(words[i])==0){
            mpword[words[i]]=1;}else
            {
                mpword[words[i]]++;
            }
            
        }
        for (int i = 0; i < oneword; i++)
        {
            int left=i,right=i,count=0;
            map<string,int>mp;
            while (right+oneword<=s.size())
            {   string tmp=s.substr(right,oneword);
                
                right=right+oneword;
                if(mpword.count(tmp)==0){
                    left=right;
                    count=0;
                    mp.clear();
                    continue;
                }
                if(mp.count(tmp)==0){
                    mp[tmp]=1;
                }else
                {
                    mp[tmp]++;
                }
                count++;
                while (mpword[tmp]<mp[tmp])
                {   string tmp1=s.substr(left,oneword);
                    left=left+oneword;
                    mp[tmp1]--;
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

