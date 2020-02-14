/*
 * @lc app=leetcode.cn id=89 lang=cpp
 *
 * [89] 格雷编码
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>ans;
        ans.push_back(0);
        int head=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = ans.size()-1; j>=0; j--)
            {
                ans.push_back(ans[j]+head);
                
            }
            head=head<<1;
            
        }
        return ans;
        
        

        

        
    }
   
};
// @lc code=end

