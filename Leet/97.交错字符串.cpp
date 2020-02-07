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
        int mem[m][1000];
        fill(mem[0],mem[0]+m*1000,-1);
        string tmp="";
        
        
        return isInterleavehelp(s1,s2,s3,0,0,0,mem);
    }
    bool isInterleavehelp(string s1,string s2,string s3,int i,int j,int k,int mem[][1000]){
        if(i==s1.length()){
            return s2.substr(j)==s3.substr(k);
        }
        if(j==s2.length()){
            return s1.substr(i)==s3.substr(k);
        }
        if(mem[i][j]!=-1){
            return mem[i][j]==1;}
        else
        {   bool ans=false;
            if(s1[i]==s3[k]){
                ans=ans||isInterleavehelp(s1,s2,s3,i+1,j,k+1,mem);
                

            }
            if(s2[j]==s3[k])
                ans=ans||isInterleavehelp(s1,s2,s3,i,j+1,k+1,mem);
            mem[i][j]=(ans==true)?1:0;
            return ans;
        }
        
    }
        


};
// @lc code=end

