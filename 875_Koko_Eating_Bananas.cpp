

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int lo = 1, hi = 0, mid, curr;
        for (int x : piles)
            hi = max(hi, x);
        
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            curr = 0;
            for (int x : piles)
                curr += (x - 1) / mid + 1;
            if (curr > H)
                lo = mid + 1;
            else
                hi = mid;
        }
        
        return lo;
    }
};

