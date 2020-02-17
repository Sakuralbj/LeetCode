/*
 * @lc app=leetcode.cn id=37 lang=cpp
 *
 * [37] 解数独
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool rows[9][9],column[9][9],block[9][9];
    void solveSudoku(vector<vector<char>>& board) {
        
        fill(rows[0],rows[0]+9*9,false);
        fill(column[0],column[0]+9*9,false);
        fill(block[0],block[0]+9*9,false);
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if(board[i][j]!='.'){
                    int index=i/3*3+j/3;
                    rows[i][board[i][j]-1-'0']=true;
                    column[j][board[i][j]-1-'0']=true;
                    block[index][board[i][j]-1-'0']=true;
                }
            }
            
        }
        solvehelp(board,0,0);
    }
    bool solvehelp(vector<vector<char>>& board,int i,int j){
        if(j==9){
            j=0;
            i=i+1;
            if(i==9){
                return true;
            }
         }
        
                if(board[i][j]=='.'){
    
                    for (int k = 1; k <= 9; k++)
                    {   bool flag=false;
                        int index=i/3*3+j/3;
                        if(rows[i][k-1]==false&&column[j][k-1]==false&&block[index][k-1]==false){
                            rows[i][k-1]=true;
                            column[j][k-1]=true;
                            block[index][k-1]=true;
                            board[i][j]=k+'0';
                            
                
                            if(!solvehelp(board,i,j+1)){
                            rows[i][k-1]=false;
                            column[j][k-1]=false;
                            block[index][k-1]=false;
                            board[i][j]='.';}else
                            {
                                return true;
                            }
                            
                        }
                        
                    }
                    
                }else
                {
                    
                return solvehelp(board,i,j+1);
                 }
                
                return false;
            }
            
        
        
    

        

        
    
};
// @lc code=end

