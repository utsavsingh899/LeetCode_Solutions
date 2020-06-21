class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prereq) {
        vector<int> G[n], indeg(n, 0), tsort;
        
        for (auto e: prereq)  {
            G[e[1]].push_back(e[0]);
            ++indeg[e[0]];
        }
            
        for (int i = 0; i < n; ++i)
            if (indeg[i] == 0)
                tsort.push_back(i);
            
        for (int i = 0; i < tsort.size(); ++i) {
            for (int y : G[tsort[i]]) {
                --indeg[y];
                if (indeg[y] == 0)
                    tsort.push_back(y);
            }
        }
            
        return tsort.size() == n;
    }
};