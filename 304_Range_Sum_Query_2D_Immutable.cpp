

class NumMatrix {
    vector<vector<int>> dp;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.size() <= 0 || matrix[0].size() <= 0)
            return;
        
        dp.resize(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
        
        for (int i = 0; i < matrix.size(); ++i)
            for (int j = 0; j < matrix[i].size(); ++j)
                dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1] + matrix[i][j] - dp[i][j];
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return dp[row2 + 1][col2 + 1] - dp[row1][col2 + 1] - dp[row2 + 1][col1] + dp[row1][col1];
    }
};
