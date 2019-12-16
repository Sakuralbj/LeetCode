#include<iostream>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        int x[m+1][n+1];
        if(m==1||n==1){
            return 1;
        }
        for (int i = 1; i <= m; i++)
        {
            x[i][1]=1;
        }
        for (int i = 1; i <= n; i++)
        {
            x[1][i]=1;
        }
        
        for (int i = 2; i <= m; i++)
        {
            for (int j = 2; j <= n; j++)
            {
                x[i][j]=x[i-1][j]+x[i][j-1];
            }
            
        }
        return x[m][n];
        
        
        
    }
};
