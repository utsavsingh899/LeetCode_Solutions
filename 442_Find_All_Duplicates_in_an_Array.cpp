




class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        vector<int> res;
        for (int x : nums) {
            if (mp.find(x) == mp.end())
                ++mp[x];
            else
                res.push_back(x);
        }
        
        return res;
    }
};



