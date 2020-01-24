class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for (int x: nums)
            res += x;
        return (nums.size() * (nums.size() + 1)) / 2 - res;
    }
};