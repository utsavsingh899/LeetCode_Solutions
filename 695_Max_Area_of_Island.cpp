class Solution {
    int dfs(int x, int y, vector<vector<int>>& grid) {
        if (0 <= x && x < grid.size() && 0 <= y && y < grid[0].size() && grid[x][y] == 1) {
            grid[x][y] = 0;
            
            return 1 + dfs(x + 1, y, grid) + dfs(x, y + 1, grid)
                        + dfs(x - 1, y, grid) + dfs(x, y - 1, grid);
        }
        
        return 0;
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        int res = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (grid[i][j] == 1)
                    res = max(res, dfs(i, j, grid));
        
        return res;
    }
};