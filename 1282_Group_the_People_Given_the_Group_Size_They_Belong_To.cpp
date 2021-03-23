
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < groupSizes.size(); ++i)
            mp[groupSizes[i]].push_back(i);
        
        for (auto x : mp) {
            int i = 0;
            vector<int> temp;
            while (i < x.second.size()) {
                temp.push_back(x.second[i++]);
                
                if (temp.size() == x.first) {
                    res.push_back(temp);
                    temp.clear();
                }
            }
        }
        
        return res;
    }
};