class LRUCache {
private:
    int capacity;
    list<pair<int,int>> li;
    unordered_map<int,list<pair<int,int>>::iterator>mp;

public:
    LRUCache(int capacity) {
        this->capacity=capacity;
        
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            pair<int,int>temp=*mp[key];
            li.erase(mp[key]);
            li.push_front(make_pair(key,temp.second));
            mp[key]=li.begin();
            return temp.second;

        }else{
            return -1;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            li.erase(mp[key]);
            li.push_front(make_pair(key,value));
            mp[key]=li.begin();
        }else{
            if(mp.size()<capacity){
             li.push_front(make_pair(key,value));
             mp[key]=li.begin();
            }else{
                
                int lastkey=li.back().first;
                li.pop_back();
                auto it=mp.find(lastkey);
                mp.erase(it);
                li.push_front(make_pair(key,value));
                mp[key]=li.begin();


             


            }
        }

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */