// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int lo = 1, hi = n, mid, res;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            res = guess(mid);
            if (res == 0)
                break;
            else if (res < 0)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return mid;
    }
};