class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] += i ? nums[i - 1] : 0;
            if (nums[i] == k)
                ++res;
            if (mp[nums[i] - k] > 0)
                res += mp[nums[i] - k];
            ++mp[nums[i]];
        }
        return res;
    }
};