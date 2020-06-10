class Solution {
public:
    int maxPower(string s) {
        int res = 1, curr = 1;
        char ch = s[0];
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == ch) {
                ++curr;
            }
            else {
                res = max(res, curr);
                curr = 1;
                ch = s[i];
            }
        }
        res = max(res, curr);
        return res;
    }
};