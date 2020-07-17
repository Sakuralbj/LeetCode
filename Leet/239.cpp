class Solution {
    deque<int>qt;
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int len=nums.size();
        vector<int>result(len-k+1,0);
        int maxnum=INT_MIN;
        for(int i=0;i<k;i++){
            while(!qt.empty()&&qt.back()<nums[i]){
                qt.pop_back();
            }
            qt.push_back(nums[i]);
            
        }
        result[0]=(qt.front());
        for(int i=k;i<nums.size();i++){
            int tmp=qt.front();
            if(tmp==nums[i-k]){
                qt.pop_front();
            }
            while(!qt.empty()&&qt.back()<nums[i]){
                qt.pop_back();
            }
            qt.push_back(nums[i]);
            result[i-k+1]=qt.front();

        }
        return result;



    }
};

总结:保证队列头部是最大值 双端队列
插入:
class MonotonicQueue {
private:
    deque<int> data;
public:
    void push(int n) {
        while (!data.empty() && data.back() < n) 
            data.pop_back();
        data.push_back(n);
    }
};

删除:
void pop(int n) {
    if (!data.empty() && data.front() == n)
        data.pop_front();
}


获取最大值:
int max() {
    return data.front();
}