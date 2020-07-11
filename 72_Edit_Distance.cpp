
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        
        auto cost = [&] (int x, int y) {
            return word1[x - 1] == word2[y - 1] ? 0 : 1;
        };
        
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 0; i <= n; ++i)
            dp[i][0] = i;
        for (int j = 0; j <= m; ++j)
            dp[0][j] = j;
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j)
                dp[i][j] = min({dp[i][j - 1] + 1, dp[i - 1][j] + 1, dp[i - 1][j - 1] + cost(i, j)});
        }
        
        return dp[n][m];
    }
};