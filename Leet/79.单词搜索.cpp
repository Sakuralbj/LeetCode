/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    bool dp[1000][1000];
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        
        
        fill(dp[0],dp[0]+m*n,false);
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
                    
                    if(exitsthelp(board,word,i,j,m,n)){
                        return true;
                    }
                }
            }
            
        
        return false;
        
        
        
    }
    bool exitsthelp(vector<vector<char>>& board,string word,int i,int j,int m,int n){
        // if(word.size()==0){
        //     return true;
        // }       
        bool tmp=false;
                if(dp[i][j]==false&&board[i][j]==word[0]){
                    if(word.size()==1){
                        return true;
                    }
                    dp[i][j]=true;
                    
                    if(i-1>=0){
                       tmp=tmp||exitsthelp(board,word.substr(1),i-1,j,m,n);
                    }
                    if(i+1<m){
                        tmp=tmp||exitsthelp(board,word.substr(1),i+1,j,m,n);
                    }
                    if(j+1<n){
                        tmp=tmp||exitsthelp(board,word.substr(1),i,j+1,m,n);
                    }
                    if(j-1>=0){
                        tmp=tmp||exitsthelp(board,word.substr(1),i,j-1,m,n);
                    }
                    dp[i][j]=false;
                }
                return tmp;
            }
            
        
    
};
// @lc code=end

