class MyHashMap {
public:
    vector<int> vec;
    MyHashMap() {
        vec.resize(100);
        fill(vec.begin(), vec.end(), -1);
    }
    
    void put(int key, int value) {
        if (key >= vec.size()) {
            int prev_size = vec.size();
            vec.resize(key + 1);
            fill(vec.begin() + prev_size, vec.end(), -1);
        }
        vec[key] = value;
    }
    
    int get(int key) {
        if (key >= vec.size())
            return -1;
        return vec[key];
    }
    
    void remove(int key) {
        if (key < vec.size())
            vec[key] = -1;
    }
};