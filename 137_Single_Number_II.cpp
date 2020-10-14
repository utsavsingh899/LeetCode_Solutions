

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        vector<int> dp(32, 0);
        for (int n : nums) {
            for (int i = 0; i < 32; ++i) {
                if (((1 << i) & n) != 0)
                    ++dp[i];
            }
        }
        
        for (int i = 0; i < 32; ++i) {
            // cout << dp[i] << ' ';
            if (dp[i] % 3 != 0)
                res += (1 << i);
        }
        
        return res;
    }
};

