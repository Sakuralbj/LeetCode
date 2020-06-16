class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            res=res^nums[i];
        }
        int h=1;
        int a=0,b=0;
        while((res&h)==0){
            h=h<<1;
        }
        cout<<h<<endl;
        for(auto it:nums){
           
            if((it&h)==0){
                a=a^it;
                
            }else{
                b=b^it;
               
            }
        }
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;

        


    }
};