class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res = 0, i;
        sort(nums.begin(), nums.end());
        for (i = 0; i < nums.size(); i += 2)
            res += nums[i];
        return res;
    }
};