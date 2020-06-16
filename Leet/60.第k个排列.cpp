class Solution {
private:
    int n;
    int k;
    string ans;
public:
    string getPermutation(int n, int k) {
        string tmp;
        this->n=n;
        this->k=k;
        vector<int>factory(n,1);
        vector<bool>visit(n+1,false);
        for(int i=2;i<n;i++){
            factory[i]=i*factory[i-1];
        }
        gethelp(0,k,tmp,factory,visit);
        return ans;
    }
    void gethelp(int index,int k,string tmp,vector<int>factory,vector<bool>visit){
        if(index==n){
            ans=tmp;
            return;
        }
        for(int i=1;i<=n;i++){
            if(visit[i]){
                continue;
            }
            int num=factory[n-tmp.size()-1];
            if(num<k){
                k=k-num;
                continue;
            }else{
            tmp=tmp+char(i+'0');
            visit[i]=true;
            gethelp(index+1,k,tmp,factory,visit);
            break;
            }
        }
        return;
        
    }
};
        
         