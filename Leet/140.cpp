class Solution {
public:
    map<string,int> mp;
    map<int,vector<string>>mp1;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>ans;
        
        for(auto it:wordDict){
            mp[it]++;
        }
        
        
        return wordBreakhelp(s,0, wordDict);
    }

    vector<string> wordBreakhelp(string s,int start,vector<string>& wordDict){
        if(mp1.count(start)==1){
            return mp1[start];
        }
        vector<string>result;
        for(int i=start;i<s.size();i++){
            string tmp=s.substr(start,i-start+1);
            if(mp.count(tmp)==1){
                if(i==s.size()-1){
                   result.push_back(tmp); 
                }else{
                vector<string> nextresult=wordBreakhelp(s,i+1,wordDict);
                for(auto it:nextresult){
                    string stmp=tmp+" "+it;
                    result.push_back(stmp);

                }
                }
            }
        }
        mp1[start]=result;
        return result;

    }
};