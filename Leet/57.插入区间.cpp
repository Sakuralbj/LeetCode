/*
 * @lc app=leetcode.cn id=57 lang=cpp
 *
 * [57] 插入区间
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        

        vector<vector<int>>ans;
        if(intervals.size()==0){
            ans.push_back(newInterval);
            return ans;
        }
        int i=0;
       
        while (i<intervals.size()&&intervals[i][0]<newInterval[0])
        {   ans.push_back(intervals[i]);
            i++;
        }
        
        if(ans.size()==0){
            ans.push_back(newInterval);
        }else
        {
            if(ans[ans.size()-1][1]<newInterval[0]){
                ans.push_back(newInterval);
            }else
            {
                ans[ans.size()-1][1]=max(ans[ans.size()-1][1],newInterval[1]);
            }
            
        }
        
        for (int j = i; j < intervals.size(); j++)
        {
            if(ans[ans.size()-1][1]<intervals[j][0]){
                ans.push_back(intervals[j]);
            }else
            {
                ans[ans.size()-1][1]=max(ans[ans.size()-1][1],intervals[j][1]);
            }
        }
        

            
        return ans;
        

        
    }
    
};
// @lc code=end

