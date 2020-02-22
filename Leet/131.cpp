class Solution {
public:
    vector<vector<string>> partition(string s) {
        
        int length=s.size();
        vector<vector<bool> > dp(length,vector<bool>(length,false));
        
        for(int len=1;len<=length;len++){
            for(int i=0;i<=length-len;i++){
                int j=i+len-1;
                dp[i][j]=(s[i]==s[j])&&(len<3||dp[i+1][j-1]);
            }
        }
        
        return partitionhelp(s,0,dp);
    }
    vector<vector<string>> partitionhelp(string s,int start,vector<vector<bool>> dp){
        vector<vector<string>> ans;
       
        for(int i=start;i<s.size();i++){
            if(dp[start][i]){
                string stmp=s.substr(start,i-start+1);
                vector<vector<string>> tmp=partitionhelp(s,i+1 ,dp);
                if(tmp.size()!=0){
                for(auto it:tmp){
                   it.insert(it.begin(), stmp);
                   ans.push_back(it);
                }
                }else{
                    vector<string>vtmp;
                    vtmp.push_back(stmp);
                    ans.push_back(vtmp);
                }
                
                
                
            }
        }
        return ans;



    }


        


    
};