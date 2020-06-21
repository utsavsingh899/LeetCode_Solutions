

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        int curr = 1, res = 0;
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1])
                ++curr;
            else {
                res = max(res, curr);
                curr = 1;
            }
        }
        res = max(res, curr);
        
        return res;
    }
};

