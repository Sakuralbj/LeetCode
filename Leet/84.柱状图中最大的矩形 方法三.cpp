/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */

// @lc code=start
//找到以位置i为最矮矩形的最大面积
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==0){
            return 0;
        }
        
        int len=heights.size();
        int left[len]={-1};
        int right[len]={len};
        right[len-1]=len;
       
        
        for (int i = 1; i < len; i++)
        {   int l=i-1;
            while (l>=0&&heights[i]<=heights[l])
            {
                l=left[l];
            }
            left[i]=l;
            
            
        }
        for (int i = len-2; i >= 0; i--)
        {   int l=i+1;
            while (l<=len-1&&heights[i]<=heights[l])
            {
                l=right[l];
            }
            right[i]=l;
            
            
        }
        
            int maxsize=0;
            for (int i = 0; i < len; i++)
            {   cout<<left[i]<<right[i]<<endl;
                maxsize=max(maxsize,heights[i]*(right[i]-left[i]-1));
                cout<<maxsize<<endl;
            }
            
        
        return maxsize;
        
        
        
    }
};
// @lc code=end

