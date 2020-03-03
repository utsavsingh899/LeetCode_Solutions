class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> count, left, right;
        int deg = 0, res = 50005;
        for (int i = 0; i < nums.size(); ++i) {
            ++count[nums[i]];
            deg = max(deg, count[nums[i]]);
            if (left.find(nums[i]) == left.end())
                left[nums[i]] = i;
            right[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i)
            if (deg == count[nums[i]])
                res = min(res, right[nums[i]] - left[nums[i]] + 1);
        return res;
    }
};