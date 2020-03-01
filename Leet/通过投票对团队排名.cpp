class Solution {
public:   
    string rankTeams(vector<string>& votes) {
        map<char,vector<int>>mp;
        for(auto it:votes){
            for(int i=0;i<it.size();i++){
                if(mp.count(it[i])==1){
                    mp[it[i]][i]++;
                }else{
                vector<int>vt(27,0);
                mp[it[i]]=vt;
                mp[it[i]][i]=1;
                }
              
                
            }
        }
        string v=votes[0];
        sort(v.begin(), v.end(), [&](char a, char b) -> bool
        {   vector<int>l1=mp[a];
            vector<int>l2=mp[b];
            for (int i = 0; i < l1.size(); ++ i)
            {   
                if(l1[i]!=l2[i]){
                    return l1[i]>l2[i];
                }
            }
            return a < b;
        });
        return v;

        


    }
};