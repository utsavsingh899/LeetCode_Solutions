class Solution {
public:
    int binaryGap(int n) {
        string s;
        while (n) {
            s += (n & 1) + '0';
            n /= 2;
        }
        reverse(s.begin(), s.end());
        
        int res = 0, lo = 0, hi = 1;
        
        while (lo < s.size() && hi < s.size()) {
            if (s[hi] == '0')
                ++hi;
            else {
                res = max(res, hi - lo);
                lo = hi;
                ++hi;
            }
        }
        
        return res;
    }
};