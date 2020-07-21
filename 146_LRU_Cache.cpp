class LRUCache {
    unordered_map<int, list<pair<int, int>>::iterator> lru;
    list<pair<int, int>> q;
    int cap;
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if (lru.find(key) == lru.end())
            return -1;
        q.splice(q.begin(), q, lru[key]);
        return lru[key]->second;
    }
    
    void put(int key, int value) {
        if (lru.find(key) != lru.end()) {
            q.splice(q.begin(), q, lru[key]);
            q.begin()->second = value;
            return;
        }
        if (lru.size() == cap) {
            lru.erase(q.back().first);
            q.pop_back();
        }
        q.push_front({key, value});
        lru[key] = q.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */