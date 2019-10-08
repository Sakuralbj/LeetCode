//
// Created by 马建波 on 2019-10-01.
//回溯
//
#include "iostream"
#include "vector"
using namespace std;
class Solution {
private:
    vector<int> path;
    vector<int>candidates;
    vector<vector<int>>res;
public:
    void DFS(int start,int target){
        if (target==0){
            res.push_back(path);
            return;
        }
        for (int i = start; i <candidates.size()&&candidates[i]<=target ; ++i) {
            if(i>start&&candidates[i]==candidates[i-1]){//重复原因i>start+1
                continue;
            }
            path.push_back(candidates[i]);
            DFS(i+1,target-candidates[i]);
            path.pop_back();



        }
        return;


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        this->candidates=candidates;

        DFS(0,target);
        return res;

    }
};
