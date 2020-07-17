class MaxQueue {
    queue<int>qt;
    deque<int>tmp;
    int maxvalue;
public:
    MaxQueue() {
        
    }
    
    int max_value() {
        if(tmp.empty()){
            return -1;
        }
        return tmp.front();
    }
    
    void push_back(int value) {
        qt.push(value);
       
            while(!tmp.empty()&&tmp.back()<value){
                tmp.pop_back();
            }

            tmp.push_back(value);
        }
        
    
    
    int pop_front() {
        if(qt.empty()){
            return -1;
        }
        int top=qt.front();
        qt.pop();
        if(top==tmp.front()){
            tmp.pop_front();
        }
        return top;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */