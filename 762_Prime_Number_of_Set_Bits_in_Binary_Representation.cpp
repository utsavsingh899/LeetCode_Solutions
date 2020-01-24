class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i <= sqrt(n); ++i)
            if (n % i == 0)
                return false;
        return true;
    }
    int countPrimeSetBits(int L, int R) {
        int res = 0, i, temp;
        for (i = L; i <= R; ++i) {
            temp = __builtin_popcount(i);
            if (isPrime(temp))
                ++res;
        }
        return res;
    }
};