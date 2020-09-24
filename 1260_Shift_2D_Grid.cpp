
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size(), temp;
        k %= m * n;
        
        while (k--) {
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (i == 0 && j == 0) {
                        temp = grid[i][j];
                        grid[i][j] = grid[m - 1][n - 1];
                    }
                    else {
                        swap(grid[i][j], temp);
                    }
                }
            }
        }
        
        return grid;
    }
};