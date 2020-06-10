class FirstUnique {
    unordered_map<int, int> freq;
    vector<int> t;
    int i, j;
public:
    FirstUnique(vector<int>& nums) {
        i = 0;
        t = nums;
        for (int i = 0; i < t.size(); ++i)
            ++freq[t[i]];
    }
    
    int showFirstUnique() {
        for (j = i; j < t.size(); ++j) 
            if (freq[t[j]] == 1) {
                i = j;
                return t[j];
            }
        i = j;
        return -1;
    }
    
    void add(int value) {
        t.push_back(value);
        ++freq[value];
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */