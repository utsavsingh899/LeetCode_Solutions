// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 1, hi = n, mid;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (!isBadVersion(mid))
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};