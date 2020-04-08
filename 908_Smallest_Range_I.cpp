class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mn = INT_MAX, mx = INT_MIN;
        for (auto x: A) {
            mn = min(mn, x);
            mx = max(mx, x);
        }
        return mx - mn - 2 * K < 0 ? 0 : mx - mn - 2 * K;
    }
};