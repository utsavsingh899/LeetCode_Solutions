class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newlen = nums.size(), i, j;
        for (i = 0; i < nums.size(); ++i) {
            if (nums[i] == val) {
                nums[i] = -1;
                --newlen;
            }
        }
        for (i = 0; i < newlen; ++i) {
            if (nums[i] == -1)
                for (j = i + 1; j < nums.size(); ++j) {
                    if (nums[j] != -1) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
        }
        return newlen;
    }
};
