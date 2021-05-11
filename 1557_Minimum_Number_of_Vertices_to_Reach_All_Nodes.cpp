class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> res, inDegree(n, 0);
        
        for (auto& edge : edges)
            ++inDegree[edge[1]];
        
        for (int i = 0; i < n; ++i)
            if (inDegree[i] == 0)
                res.push_back(i);
        
        return res;
    }
};