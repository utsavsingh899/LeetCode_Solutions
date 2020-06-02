class Solution {
    void dfs(int x, int y, vector<vector<char>>& grid) {
        grid[x][y] = '0';
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        int tx, ty, n = grid.size(), m = grid[0].size();
        for (int i = 0; i < 4; ++i) {
            tx = x + dx[i];
            ty = y + dy[i];
            if (0 <= tx && tx < n && 0 <= ty && ty < m && grid[tx][ty] == '1')
                dfs(tx, ty, grid);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0 || grid[0].size() == 0)
            return 0;
        int res = 0;
        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[i].size(); ++j)
                if (grid[i][j] == '1') {
                    ++res;
                    dfs(i, j, grid);
                }
        return res;
    }
};