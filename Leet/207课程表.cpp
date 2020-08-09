class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>in(numCourses,0);
        vector<vector<int>>vt(numCourses);
        for(auto it:prerequisites){
            in[it[1]]++;
            vt[it[0]].push_back(it[1]);
        }
        queue<int>qt;
        for(int i=0;i<numCourses;i++){
            if(in[i]==0){
                qt.push(i);
            }
        }
        while(!qt.empty()){
            int top=qt.front();
            for(auto x:vt[top]){
            
                    in[x]--;
                    if(in[x]==0){
                        qt.push(x);
                    }
                }
            
            qt.pop();
            numCourses--;
    }
    
     return numCourses==0;
    }
        


    
};