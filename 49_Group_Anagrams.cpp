class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        string temp;
        for (auto s : strs) {
            temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        for (auto x : mp)
            res.push_back(x.second);
        return res;
    }
};