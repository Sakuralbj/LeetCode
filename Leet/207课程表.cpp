class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int ingree[numCourses];
        fill(ingree,ingree+numCourses,0);
        for(auto it:prerequisites){
            ingree[it[0]]++;
        }
        queue<int>qt;
        for(int i=0;i<numCourses;i++){
            if(ingree[i]==0){
                qt.push(i);
            }
        }
        while(!qt.empty()){
            int top=qt.front();
            qt.pop();
            for(auto it:prerequisites){
                if(it[1]!=top){
                    continue;
                }
                int tail=it[0];
                ingree[tail]--;
                if(ingree[tail]==0){
                    qt.push(tail);
                }
            }
            numCourses--;
        }
        
        return numCourses==0;

    }
};