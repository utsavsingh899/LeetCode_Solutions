

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int x : nums)
            ++mp[x];
        
        vector<int> vp;
        for (auto x : mp)
            vp.push_back(x.first);
        
        nth_element(vp.begin(), vp.begin() + k - 1, vp.end(),[&](int& a, int& b) {
            return mp[a] > mp[b];
        });
        
        vp.resize(k);
                
        return vp;
    }
};

