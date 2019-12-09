//
// Created by 马建波 on 2019-12-08.
//
#include "iostream"
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int left=-1,right=-1;
        int maxsize=1;
        if(n<=1){
            return s;
        }
        bool x[n][n];
        
        for (int i = n-2; i >=0; i--)
        {
            for (int j = i+1; j <=n-1; j++)
            {   if(j-i<=2){
                x[i][j]=(s[i]==s[j]);
            }  else
                {
                   x[i][j]=(s[i]==s[j])&&(x[i+1][j-1]);
                }
                if(x[i][j]&&j-i+1>maxsize){
                    left=i;
                    right=j;
                    maxsize=j-i+1;
                }
                
            }
            
        }
        if(maxsize==1){
            return s.substr(0,1);
        }
        cout<<left;
        cout<<right;
        return s.substr(left,right-left+1);
    }
};
