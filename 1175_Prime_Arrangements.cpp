
class Solution {
    long count(long res, long t, long hell) {
        long curr = 1L;
        for (int i = 2; i <= t; ++i)
            curr = (curr % hell * i % hell) % hell;
        return (res % hell * curr % hell) % hell;
    }
public:
    int numPrimeArrangements(int n) {
        long hell = 1000000007L, res = 1L, primes = 0L;
        vector<int> dp(n + 1);
        for (int i = 2; i * i <= n; ++i)
            if (dp[i] == 0)
                for (int j = i * i; j <= n; j += i)
                    dp[j] = 1;
        for (int i = 2; i <= n; ++i)
            if (dp[i] == 0)
                ++primes;
        res = count(res, primes, hell);
        primes = n - primes;
        res = count(res, primes, hell);
        return res;
    }
};