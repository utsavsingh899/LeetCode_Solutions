class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        long res = ~0;
        for (long i = m; i <= n; ++i) {
            res &= i;
            if (!res)
                return res;
        }
        return res;
    }
};