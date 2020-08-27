



class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n = dungeon.size(), m = dungeon[0].size();
        
        vector<int> dp(m + 1, INT_MAX);
        dp[m - 1] = 1;
        
        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                dp[j] = min(dp[j], dp[j + 1]) - dungeon[i][j];
                dp[j] = max(1, dp[j]);
            }
        }
        
        return dp[0];
    }
};


