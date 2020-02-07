/*
 * @lc app=leetcode.cn id=97 lang=cpp
 *
 * [97] 交错字符串
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()==0){
            return s2==s3;
        }
        if(s2.length()==0){
            return s1==s3;
        }
        if(s1.length()+s2.length()!=s3.length()){
            return false;
        }
        int m=s1.length();
        int n=s2.length();
        bool mem[m+1][n+1];
        fill(mem[0],mem[0]+m*n,false);
        for (int i = 0; i <=m; i++)
        {
            mem[i][0]=(i==0)?true:(mem[i-1][0]&&s1[i-1]==s3[i-1]);

        }
        for (int i = 0; i <=n; i++)
        {
            mem[0][i]=(i==0)?true:(mem[0][i-1]&&s2[i-1]==s3[i-1]);
        }
        for (int i = 1; i <=m; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                mem[i][j]=(s1[i-1]==s3[i+j-1]&&mem[i-1][j])||(s2[j-1]==s3[i+j-1]&&mem[i][j-1]);
            }
            
        }
        
        return mem[m][n];
        
        
        

    
        
    }
   
        


};
// @lc code=end

