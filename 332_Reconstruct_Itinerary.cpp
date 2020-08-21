
class Solution {
    unordered_map<string, multiset<string>> G;
    vector<string> res;
    void dfs(string s) {
        while (G[s].size()) {
            string next = *G[s].begin();
            G[s].erase(G[s].begin());
            dfs(next);
        }
        res.push_back(s);
        
        return;
    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for (auto t : tickets)
            G[t[0]].insert(t[1]);
        
        dfs("JFK");
        
        return vector<string>(res.rbegin(), res.rend());
    }
};