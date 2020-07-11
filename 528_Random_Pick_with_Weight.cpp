class Solution {
private:
    vector<int> s;
public:
    Solution(vector<int>& w) {
        for (int x : w)
            s.empty() ? s.push_back(x) : s.push_back(s.back() + x);
    }
    
    int pickIndex() {
        int x = s.back();
        int r = rand() % x;
        return upper_bound(s.begin(), s.end(), r) - s.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */