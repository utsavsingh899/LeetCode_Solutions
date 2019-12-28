class MyHashSet {
public:
    /** Initialize your data structure here. */
    bool mySet[1000005] = {false};
    MyHashSet() {
        //do nothing
    }
    
    void add(int key) {
        mySet[key] = true;
    }
    
    void remove(int key) {
        mySet[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return mySet[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */