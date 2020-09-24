class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, 0));
        for (int i = 1; i <= A.size(); ++i) {
            for (int j = 1; j <= B.size(); ++j) {
                if (A[i - 1] == B[j - 1])
                    dp[i][j] = min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]}) + 1;
                else
                    dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]});
            }
        }
        
        // for (int i = 1; i <= A.size(); ++i) {
        //     for (int j = 1; j <= B.size(); ++j)
        //         cout << dp[i][j] << ' ';
        //     cout << '\n';
        // }

        return dp[A.size()][B.size()];
    }
};