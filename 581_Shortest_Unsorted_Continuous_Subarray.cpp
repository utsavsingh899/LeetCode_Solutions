class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp(nums.begin(), nums.end());
        int l = nums.size(), r = 0;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] != temp[i]) {
                l = i;
                break;
            }
        for (int i = nums.size() - 1; i >= 0; --i)
            if (nums[i] != temp[i]) {
                r = i;
                break;
            }
        if (r - l < 0)
            return 0;
        return r - l + 1;
    }
};