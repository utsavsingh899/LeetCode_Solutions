class Solution {
    void dfs(int curr, vector<int>& path, vector<vector<int>>& graph, vector<vector<int>>& res) {
        path.push_back(curr);
        
        if (curr == graph.size() - 1)
            res.push_back(path);
        else
            for (auto& node : graph[curr])
                dfs(node, path, graph, res);
        
        path.pop_back();
        
        return;
    }
    
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path;
        
        dfs(0, path, graph, res);
        
        return res;
    }
};