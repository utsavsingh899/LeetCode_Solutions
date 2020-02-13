class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> rank;
        map<int, int> mp;
        for (int i = 0; i < arr.size(); ++i)
            mp[arr[i]] = 1;
        int k = 1;
        for (auto itr = mp.begin(); itr != mp.end(); ++itr)
            itr->second = k++;
        for (int i = 0; i < arr.size(); ++i)
            rank.push_back(mp[arr[i]]);
        return rank;
    }
};