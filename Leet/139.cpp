class Solution {
public:
    map<string,int>mp;
    map<int,bool>mp1;
    bool wordBreak(string s, vector<string>& wordDict) {
        
        for(auto it:wordDict){
            mp[it]++;
        }
        return breakhelp(s,wordDict,0);

    }
    bool breakhelp(string s,vector<string>& wordDict,int start){
        if(start==s.size()){
            return true;
        }
        if(mp1.count(start)!=0){
            return mp1[start];
        }
        bool flag=false;
        for(int i=start;i<s.size();i++){
            string tmp=s.substr(start,i-start+1);
            
            if(mp.count(tmp)!=0){
                cout<<tmp.c_str()<<endl;
                flag=flag||breakhelp(s,wordDict,i+1);
                if(flag){
                    return true;
                }
            }

        }
        mp1[start]=flag;
        return flag;
        
    }
};

dp:
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,int> mp;
        vector<bool> vt(s.size(),false);
        for(auto it:wordDict){
            mp[it]++;
        }
        vt[0]=(mp.count(s.substr(0,1))==1)?true:false;
       for(int i=1;i<s.size();i++){
           if(mp.count(s.substr(0,i+1))==1){
               vt[i]=true;
               continue;
           }
           for(int j=0;j<i;j++){
               string tmp=s.substr(j+1,i-j);
               if(mp.count(tmp)==1){
                   vt[i]=vt[i]||vt[j];
                   if(vt[i]){
                       continue;
                   }
               }
           }
       }
       return vt[s.size()-1];

    }
   
       
};




