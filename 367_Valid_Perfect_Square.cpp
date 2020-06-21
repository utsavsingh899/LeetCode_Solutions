class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned long long lo = 1, hi = num, mid;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (mid * mid == num)
                return true;
            else if (mid * mid > num)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return false;
    }
};