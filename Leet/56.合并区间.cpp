/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int len=intervals.size();
        vector<vector<int>>ans;
        if(len==0){
            return ans;
        }
        auto cmp = [](vector<int> &a, vector<int> &b) {return a[0] < b[0];};      
        sort(intervals.begin(),intervals.end(),cmp);
        ans.push_back(intervals[0]);


        for (int i = 1; i < len; i++)
        {   vector<int>tmp=ans[ans.size()-1];
            if(tmp[1]>=intervals[i][0]){
                ans[ans.size()-1][1]=max(tmp[1],intervals[i][1]);

            }else
            {
                ans.push_back(intervals[i]);
            }
            
        }
        return ans;
    }   
    
        

      
       
        
        
    
};
// @lc code=end

