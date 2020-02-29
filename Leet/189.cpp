class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        k=k%len;
        if(k==0){
            return;
        }
        int count=0;
        int start=0;
        while(count<len){
            
            int next=(start+k)%len;
            int pre=nums[start];
            int tmp;
            while(next!=start){
                tmp=nums[next];
                nums[next]=pre;
                pre=tmp;
                next=(next+k)%len;
                count++;
            }
            nums[start]=pre;
            count++;
            start++;
        }
        return;
    }
};