class Solution {
public:
    int countPrimes(int n) {
        if(!n)
            return 0;
        vector<bool> dp(n, true);
        int i, j;
        dp[0] = false;
        dp[1] = false;
        for (i = 2; i <= sqrt(n); ++i)
            if(dp[i])
                for (j = i; i * j <= n; ++j)
                    dp[i * j] = false;
        return count(dp.begin(), dp.end(), true);
    }
};