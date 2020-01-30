/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(matrix.size()==0){
            return ans;
        }
        int c1=0,c2=matrix[0].size()-1;
        int r1=0,r2=matrix.size()-1;
        cout<<c2<<endl;
        cout<<r2<<endl;
        while (c1<=c2&&r1<=r2)
        {
            for (int c = c1; c <=c2 ; c++)
            {
                ans.push_back(matrix[r1][c]);
            }
            for (int r = r1+1; r <=r2 ; r++)
            {
                ans.push_back(matrix[r][c2]);
            }
            cout<<c2<<" "<<c1;
            for (int c = c2-1; c >= c1; c--)
            {   cout<<123;
                if(r1!=r2){
                ans.push_back(matrix[r2][c]);
            }
            }
            for (int r = r2-1; r >r1 ; r--)
            {   if(c1!=c2){
                ans.push_back(matrix[r][c1]);
            }
            }
            c1++;
            c2--;
            r1++;
            r2--;

            
            
        }
        return ans;
        
    }
};
// @lc code=end

