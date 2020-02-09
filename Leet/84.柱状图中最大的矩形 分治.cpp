/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // if(heights.size()==0){
        //     return 0;
        // }
        int len=heights.size();
        return largehelp(heights,0,len-1);

        
        
        
    }
    int largehelp(vector<int>& height,int start,int end){//为什么为什么
        if(start>end){
            return 0;
        }
        int mindex=start;
        for (int i = start; i <=end; i++)
        {
            if(height[i]<height[mindex]){
                mindex=i;
            }
        }
        //int x=max(height[mindex]*(end-start+1),largehelp(height,start,mindex-1));
        return max(max(height[mindex]*(end-start+1),largehelp(height,start,mindex-1)),largehelp(height,mindex+1,end));
        //return max((end - start + 1) * height[mindex], max(largehelp(height, start, mindex - 1), largehelp(height, mindex + 1, end)));
        

    }
};
// @lc code=end

