
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1, hi = 0, mid, curr;
        
        for (int x : nums)
            hi = max(hi, x);
        
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            
            curr = 0;
            for (int i = 0; i < nums.size(); ++i)
                curr += (nums[i] - 1) / mid + 1;
            
            if (curr <= threshold)
                hi = mid;
            else
                lo = mid + 1;
        }
        
        return lo;
    }
};