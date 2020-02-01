/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        map<int,string>mp;
        mp[1000]="M";
        mp[900]="CM";
        mp[500]="D";
        mp[400]="CD";
        mp[100]="C";
        mp[90]="XC";
        mp[50]="L";
        mp[40]="XL";
        mp[10]="X";
        mp[9]="IX";
        mp[5]="V";
        mp[4]="IV";
        mp[1]="I";
        
        string ans="";
        auto m=mp.end();
        m--;
        
        while (num>0)
        {  
            if(num>=m->first){
                
                num=num-m->first;
                
                ans=ans+m->second;
                continue;
            }
            m--;

        }
        return ans;
        
        

        
        
    }
};
// @lc code=end

