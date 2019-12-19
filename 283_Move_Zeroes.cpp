class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int curr = 0, lastNonZero = 0; curr < nums.size(); ++curr) {
            if (nums[curr] != 0)
                swap(nums[lastNonZero++], nums[curr]);
        }
    }
};