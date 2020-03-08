#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
using namespace std;

class Solution {
public:
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        queue<pair<int,int> >qt;
        qt.push(make_pair(headID,0));
        map<int,vector<int> >mp;
        int ans=0;
        for(int i=0;i<manager.size();i++){
            mp[manager[i]].push_back(i);
        }
        while(!qt.empty()){
            pair<int,int> tmp=qt.front();
            qt.pop();
            ans=max(ans,tmp.second);
            
                for(int i=0;i<mp[tmp.first].size();i++){
                    qt.push(make_pair(mp[tmp.first][i],tmp.second+informTime[tmp.first]));
                }
            
        }
        return ans;



    
    }

    
};