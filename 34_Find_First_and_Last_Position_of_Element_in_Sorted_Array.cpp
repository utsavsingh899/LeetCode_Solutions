class Solution {
    int search(vector<int> nums, int target) {
        int lo = 0, hi = nums.size() - 1, mid;
        
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        
        return lo;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = search(nums, target);
        int hi = search(nums, target + 1) - 1;
        
        if (lo < nums.size() && nums[lo] == target)
            return {lo, hi};
        
        return {-1, -1};
    }
};