class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res(nums.size(), -1);
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = nums.size() - 2; j >= index[i]; --j)
                res[j + 1] = res[j];
            res[index[i]] = nums[i];
        }
        return res;
    }
};