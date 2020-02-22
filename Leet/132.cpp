class Solution {
public:
    map<int,int>mp;
    int minCut(string s) {
        int length=s.size();
        if(length==0){
            return 0;
        }
        vector<vector<bool> > dp(length,vector<bool>(length,false));
        for(int len=1;len<=length;len++){
            for(int i=0;i<=length-len;i++){
                int j=i+len-1;
                dp[i][j]=(s[i]==s[j])&&(len<3||dp[i+1][j-1]);
            }
        }
        if(dp[0][s.size()-1]){
            return 0;
        }
        int mindp[length];
        mindp[0]=0;
        for(int i=1;i<length;i++){
            mindp[i]=INT_MAX;
            if(dp[0][i]){
                mindp[i]=0;
                continue;
            }
            for(int j=1;j<=i;j++){
                if(dp[j][i]){
                    
                    mindp[i]=min(mindp[i],mindp[j-1]+1);
                }

            }
            cout<<mindp[i]<<endl;


        }
        return mindp[length-1];

        
        
        
        

    }
    
    
};