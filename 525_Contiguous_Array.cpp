class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int count = 0, res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            count += (nums[i] ? 1 : -1);
            if (count == 0)
                res = max(res, i + 1);
            if (mp.find(count) == mp.end())
                mp[count] = i;
            else
                res = max(res, i - mp[count]);
        }
        return res;
    }
};