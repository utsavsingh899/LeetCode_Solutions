







class Solution {
public:
    int arrangeCoins(int n) {
        int k = 0;
        while (n >= k) {
            n -= k;
            ++k;
        }
        return k - 1;
    }
};





