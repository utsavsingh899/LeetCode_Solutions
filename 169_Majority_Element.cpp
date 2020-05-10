class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto x : nums)
            ++mp[x];
        for (auto x : nums)
            if (mp[x] > nums.size() / 2)
                return x;
        return -1;
    }
};