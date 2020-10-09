

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        if (grid.size() == 0 || grid[0].size() == 0)
            return {};
        
        int res = 0;
        vector<int> row(grid.size()), col(grid[0].size());
        
        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[0].size(); ++j) {
                col[j] = max(col[j], grid[i][j]);
                row[i] = max(row[i], grid[i][j]);
            }
        
        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[0].size(); ++j)
                res += min(row[i], col[j]) - grid[i][j];
        
        return res;
    }
};
