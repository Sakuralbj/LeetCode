        /*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
            class Solution {
            public:
                bool isValidSudoku(vector<vector<char>>& board) {
                    bool rows[9][9],column[9][9],block[9][9];
                    fill(rows[0],rows[0]+9*9,false);
                    fill(column[0],column[0]+9*9,false);
                    fill(block[0],block[0]+9*9,false);
                    
                    for (int i = 0; i < 9; i++)
                    {
                        for (int j = 0; j < 9; j++)
                        {   if(board[i][j]!='.'){
                            int tmp=board[i][j]-'0';      

                            int index=(i/3)*3+(j/3);  
                            
                            if(rows[i][tmp-1]==true||column[j][tmp-1]==true||block[index][tmp-1]==true){
                                return false;
                            }else
                            {
                                rows[i][tmp-1]=true;
                                column[j][tmp-1]=true;
                                block[index][tmp-1]=true;
                            }
                            
                        }
                        
                    }
                    }
                return true;
                    
                }
                
                };
// @lc code=end

