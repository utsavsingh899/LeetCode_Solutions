
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if (n == 1)
            return 1;
        
        vector<int> idx(primes.size());
        vector<int> dp(n);
        dp[0] = 1;
        for (int i = 1; i < n; ++i) {
            int mn = INT_MAX;
            for (int j = 0; j < primes.size(); ++j)
                mn = min(mn, dp[idx[j]] * primes[j]);
                
            dp[i] = mn;
            for (int j = 0; j < idx.size(); ++j)
                if (dp[idx[j]] * primes[j] == dp[i])
                    ++idx[j];
        }
        
        return dp[n - 1];
    }
};
