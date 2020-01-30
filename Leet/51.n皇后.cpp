/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N皇后
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));   ;
        solveNQueenshelp(0,board);
        return ans; 
        
    }
    void solveNQueenshelp(int row,vector<string>& tmp){
            int n=tmp.size();
            if(row==tmp.size()){
                ans.push_back(tmp);
            }
            for (int i = 0; i < n; i++)
            {
                if (Isvalid(row,i,tmp))
                {   tmp[row][i]='Q';
                    solveNQueenshelp(row+1,tmp);
                    tmp[row][i]='.';
                }
            }
    }
    bool Isvalid(int row,int column,vector<string> tmp){
        if(row==0){
            return true;
        }
        for (int i = 0; i < row; i++)
        {
            if(tmp[i][column]=='Q'){
                return false;
            }
                            
        }
        for (int i = row-1, j=column+1; j < tmp[0].size()&&i>=0; j++,i--)
        {
            if(tmp[i][j]=='Q'){
                return false;
            }
        }
        for (int i = row-1, j=column-1; j>= 0&&i>=0; j--,i--)
        {
            if(tmp[i][j]=='Q'){
                return false;
            }
        }
        return true;
        
        
    }
                    
                
                
            
            
    

};
// @lc code=end

