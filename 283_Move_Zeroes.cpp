




class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j, new_len = nums.size();
        for (i = 0; i < nums.size(); ++i) 
            if (nums[i] == 0)
                --new_len;
        for (i = 0; i < new_len; ++i) {
            if (nums[i] == 0) {
                for (j = i+1; j < nums.size(); ++j) {
                    if (nums[j] != 0) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            }
        }
    }
};



