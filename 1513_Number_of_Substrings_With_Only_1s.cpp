
class Solution {
public:
    int numSub(string s) {
        const int MOD = 1e9 + 7;
        
        long long res = 0, c = 0;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1')
                ++c;
            else {
                res += c * (c + 1) / 2;
                res %= MOD;
                c = 0;
            }
        }
        
        res += c * (c + 1) / 2;
        res %= MOD;
        
        return res;
    }
};
