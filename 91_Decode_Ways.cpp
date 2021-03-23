

class Solution {
public:
    int numDecodings(string s) {
        if (s.empty() || s[0] == '0')
            return 0;
        
        vector<int> dp(s.size() + 1);
        dp[0] = 1;
        dp[1] = 1;
        
        for (int i = 2; i <= s.size(); ++i) {
            if (s[i - 1] > '0')
                dp[i] += dp[i - 1];
            
            if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6'))
                dp[i] += dp[i - 2];
        }
        
        return dp[s.size()];
    }
};
