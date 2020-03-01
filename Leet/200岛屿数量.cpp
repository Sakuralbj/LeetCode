/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int m=grid.size(),n=grid[0].size();
       
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    
                    dfs(grid,i,j);
                }
            }
        }
        return count;

    }
    void dfs(vector<vector<char>>& grid,int i,int j){
        
        grid[i][j]=true;
        
        if(i>=1&&grid[i-1][j]=='1'){
            dfs(grid,i-1,j);
        }
        
        if(i<grid.size()-1&&grid[i+1][j]=='1'){
            dfs(grid,i+1,j);
        }
        
        
        if(j>0&&grid[i][j-1]=='1'){
            dfs(grid,i,j-1);
        }
        
        if(j<grid[0].size()-1&&grid[i][j+1]=='1'){
            dfs(grid,i,j+1);
        }
        return;
        
    }
};
};
// @lc code=end

