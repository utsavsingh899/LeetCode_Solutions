class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> res;
        int sum = 0, temp = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        for (auto x : nums)
            sum += x;
        for (auto x : nums) {
            temp += x;
            res.push_back(x);
            if (2 * temp > sum)
                break;
        }
        return res;
    }
};