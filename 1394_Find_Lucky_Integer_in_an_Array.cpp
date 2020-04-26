class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int lucky = -1;
        for (auto x: arr)
            ++mp[x];
        for (auto p: mp)
            if (p.first == p.second && p.first > lucky)
                lucky = p.first;
        return lucky;
    }
};