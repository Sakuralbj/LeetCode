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
        
        for (int i = 0; i < s.size()-wholeword+1; i++)
        {   bool flag=true;
            map<string,int>mp;
            for (int j = i; j < i+wholeword; j=j+oneword)
            {   
                string tmp=s.substr(j,oneword);//substr(start,length),substring(start,end);
                //cout<<i<<endl;
                
                if(mpword.count(tmp)==0){
                    flag=false;
                    break;
                }
                if(mp.count(tmp)==0){
                    
                    mp[tmp]=1;
                }else
                {
                    mp[tmp]++;
                    
                }
                if(mp[tmp]>mpword[tmp]){
                    flag=false;
                    break;
                }
                
                
            }
            if(flag==true){
                ans.push_back(i);
            }
            
        }
        return ans;
        
        
        
    }
};
// @lc code=end

