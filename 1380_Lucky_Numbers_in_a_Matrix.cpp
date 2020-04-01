

class Solution {
public:
    bool checkLucky(vector<vector<int>> matrix, int x, int y) {
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < matrix.size(); ++i)
            mx = max(mx, matrix[i][y]);
        if (mx != matrix[x][y])
            return false;
        for (int j = 0; j < matrix[x].size(); ++j)
            mn = min(mn, matrix[x][j]);
        return mn == matrix[x][y] ? true : false;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        for (int i = 0; i < matrix.size(); ++i)
            for (int j = 0; j < matrix[i].size(); ++j)
                if (checkLucky(matrix, i, j))
                    res.push_back(matrix[i][j]);
        return res;
    }
};
