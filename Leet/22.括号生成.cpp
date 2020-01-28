/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string>result;
    vector<string> generateParenthesis(int n) {
        if(n==0){
            return result;
        }
        string str="";
        generate( str,0,0,n);
        
        return result;

        
    }
    void generate(string str,int left,int right,double end){
        cout<<1;
        if(str.length()==2*end){
            result.push_back(str);
            return;
        }
        if(left<end){
        generate(str+'(',left+1,right,end);}
        if(left>right){

        generate(str+')',left,right+1,end);}



    }
};
// @lc code=end

