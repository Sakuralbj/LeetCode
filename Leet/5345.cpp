
  
class Solution {
    
public:
    
    string rankTeams(vector<string>& votes) {
        if(votes.size()==1){
            return votes[0];
        }
        vector<map<char,int>>vt;
        for(int i=0;i<votes[0].size();i++){
            map<char,int>mp;
            for(int j=0;j<votes.size();j++){
                mp[votes[j][i]]++;
            }
            vt.push_back(mp);
        }
        //vt存放所有的map，vt[0]存放第一名的map.....
        
        sort(votes[0].begin(),votes[0].end(),[&](char a,char b){
                for(int i=0;i<vt.size();i++){
                map<char,int>mp=vt[i];
                int l=(mp.count(a)==1)?mp[a]:0;
                int r=(mp.count(b)==1)?mp[b]:0;
                if(l!=r){
                     return l>r;
                }
                }
                return a<b;

});
        return votes[0];
        

    }
};