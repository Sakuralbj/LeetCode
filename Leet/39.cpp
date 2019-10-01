//
// Created by jianbo on 2019-09-30.
//回溯
//
#include "iostream"
#include "vector"
using namespace std;

class Solution {
private:
    vector<int> candidates;
    vector<vector<int>> res;
    vector<int> path;

public:
    void DFS(int start, int target) {
        if (target == 0) {
            res.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size() && candidates[i] <= target; ++i) {

            path.push_back(candidates[i]);
            DFS(i, target - candidates[i]);
            path.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        this->candidates=candidates;
        DFS(0,target);
        return res;
    }
};