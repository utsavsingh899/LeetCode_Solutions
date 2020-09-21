

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for (string s : words)
            ++mp[s];
        
        vector<string> res;
        for (auto x : mp)
            res.push_back(x.first);
        
        sort(res.begin(), res.end(), [&](string& a, string& b) {
            if (mp[a] == mp[b])
                return a < b;
            return mp[a] > mp[b];
        });
        
        res.resize(k);
        
        return res;
    }
};
