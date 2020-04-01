class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = 0; i < grid.size(); ++i) {
            if (grid[i][0] < 0) {
                res += grid[0].size();
                continue;
            }
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] < 0) {
                    res += grid[0].size() - j;
                    break;
                }
            }
        }
        return res;
    }
};