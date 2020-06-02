class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(102, 0);
        for (auto x: nums)
            ++count[x + 1];
        for (int i = 1; i < 102; ++i)
            count[i] += count[i - 1];
        for (auto& x: nums)
            x = count[x];
        return nums;
    }
};