

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return -1;
        int lo = 0, hi = nums.size() - 1, mid, res;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] > nums[hi])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (target > nums[nums.size() - 1])
            res = lower_bound(nums.begin(), nums.begin() + lo, target) - nums.begin();
        else
            res = lower_bound(nums.begin() + lo, nums.end(), target) - nums.begin();
        if (nums[res] == target)
            return res;
        return -1;
    }
};
