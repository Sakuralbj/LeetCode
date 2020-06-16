/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        if(m==0){
            return ans;
        }
        int n=matrix[0].size();
        int left=0,right=n-1,up=0,down=m-1;
        while(true){
            
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[up][i]);
            }
            if(++up>down){
                break;
            }
            for(int i=up;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            if(--right<left){
                break;
            }
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[down][i]);
            }
            
            if(--down<up){
                break;
            }
            for(int i=down;i>=up;i--){
                ans.push_back(matrix[i][left]);
            }
            if(++left>right){
                break;
            }
            
           
        }
        return ans;

    }
};
// @lc code=end

