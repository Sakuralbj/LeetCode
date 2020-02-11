/*
 * @lc app=leetcode.cn id=85 lang=cpp
 *
 * [85] 最大矩形
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxsize=0;
        
        int m=matrix.size();
        if(m==0){
            return 0;
        }
        int n=matrix[0].size();
        
        
        int left[m][n],up[m][n];
        
        for (int i = 0; i < m; i++)
        {
           for (int j = 0; j < n; j++)
           {   if(j==0){
               left[i][j]=(matrix[i][j]=='1')?1:0;
           }else
           {
               left[i][j]=(matrix[i][j]=='1')?left[i][j-1]+1:0;
           }
                if(i==0){
                    up[i][j]=(matrix[i][j]=='1')?1:0;}
                    else
                    {up[i][j]=(matrix[i][j]=='1')?up[i-1][j]+1:0;
                    }
                    
               
               
               int tmp=left[i][j];
               int tmpsize=-1;
               int minheight=10000;
               cout<<"tmp="<<tmp<<endl;
               for (int k = j; k >= j-tmp+1; k--)
               {   
                   minheight=min(minheight,up[i][k]);
                   tmpsize=max((j-k+1)*minheight,tmpsize);
                   
               }
               cout<<tmpsize<<endl;
               maxsize=max(maxsize,tmpsize);
               
           }
           
        }
        
        return maxsize;
        


        
    }
};
// @lc code=end

