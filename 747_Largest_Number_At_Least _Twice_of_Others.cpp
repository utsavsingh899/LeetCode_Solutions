class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = 0, mx2 = 0, i, idx;
        for (i = 0; i < nums.size(); ++i) {
            if (nums[i] > mx) {
                mx2 = mx;
                mx = nums[i];
                idx = i;
            }
            else if (nums[i] > mx2)
                mx2 = nums[i];
        }
        if (mx2 * 2 <= mx)
            return idx;
        return -1;
    }
};