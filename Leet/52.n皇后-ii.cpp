/*
 * @lc app=leetcode.cn id=52 lang=cpp
 *
 * [52] N皇后 II
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int result=0;
    int totalNQueens(int n) {
    vector<string>tmp(n,string(n,'.'));
    totalNQueenshelp(0,tmp);
    return result;
    }

    

void totalNQueenshelp(int row,vector<string>& tmp){
            int n=tmp.size();
            if(row==tmp.size()){
                result++;
                return;
            }
            for (int i = 0; i < n; i++)
            {
                if (Isvalid(row,i,tmp))
                {   tmp[row][i]='Q';
                    totalNQueenshelp(row+1,tmp);
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

