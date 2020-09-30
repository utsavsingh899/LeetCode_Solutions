\



class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty())
            return 0;
        
        int dp1 = 0, dp2 = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            int temp = dp2;
            dp2 = max(dp2, dp1 + nums[i]);
            dp1 = temp;
        }
        
        return dp2;
    }
};



