class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0, i = 0;
        vector<int> a(32, 0);
        while (n) {
            a[i++] = n % 2;
            n /= 2;
        }
        reverse(a.begin(), a.end());
        for (i = 0; i < 32; ++i)
            if (a[i] == 1)
                ans += pow(2, i);
        return ans;
    }
};