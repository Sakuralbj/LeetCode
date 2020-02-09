/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */

// @lc code=start

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==0){
            return 0;
        }
        int len=heights.size();
        int maxsize=0;
        stack<int>st;
        st.push(-1);
        for (int i = 0; i < len; i++)
        {   
            while (st.top()!=-1&&heights[i]<=heights[st.top()])
            {
                    int x=st.top();
                    st.pop();
                    maxsize=max(maxsize,heights[x]*(i-st.top()-1));

            }
            
            st.push(i);
            cout<<i<<endl;
                
            
            
            
        }
        while (st.top()!=-1)
        {
            int x=st.top();
            st.pop();
            maxsize=max(maxsize,heights[x]*(len-st.top()-1));
        }
        return maxsize;
       
        
        
        
    }
};
// @lc code=end

