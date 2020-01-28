#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len=needle.size();
        int m=haystack.size();
        for (int  i = 0; i <m-len+1 ; i++)
        {   int j=0;
            for (  ;j < len; j++)
            {
                if(haystack[i+j]!=needle[j]){
                    break;
                }
                
            }
            if(j==len){
                return i;
            }
            
        }
        return -1;
    }
    
};        
