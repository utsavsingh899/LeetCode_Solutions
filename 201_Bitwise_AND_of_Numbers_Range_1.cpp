class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        return (m < n) ? rangeBitwiseAnd(m / 2, n / 2) << 1 : n;
    }
};