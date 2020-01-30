/*
 * @lc app=leetcode.cn id=60 lang=cpp
 *
 * [60] 第k个排列
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;
class Solution {
    int num=0;
    string result="";
public:
    string getPermutation(int n, int k) {
    bool visited[10];    
    memset(visited,false,sizeof(visited));
    string tmp="";
    permutehelp(n,tmp,visited, k);
    return result;
        
    }

    int factorial(int n){
        int ans=1;
        for (int i = 1; i <= n; i++)
        {
            ans=ans*i;
        }
        return ans;
        
    }

    void permutehelp(int n,string tmp,bool visited[],int k){
        if(tmp.size()==n){
            result=tmp;
            return;
        }
        
        int divided=factorial(n-tmp.size()-1);
        int index=k/divided;
        int nextk=k%divided;
        if(nextk==0){
            k=k-divided*(index-1);
        }else
        {
            k=k-divided*(index);
            index=index+1;
        }
        int x=0;
        for ( int i = 1; i <= n; i++)
        {
            if(visited[i]==true){
                continue;
            }
            x++;
            if(x==index){
                visited[i]=true;
                x=i;
                break;
            }
        }
        tmp=tmp+char(x+'0');
        permutehelp(n,tmp,visited,k);
        return;
        
    }
        
        
        
        
        
            
            
        
        
    
};
// @lc code=end

