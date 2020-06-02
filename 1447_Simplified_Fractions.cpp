class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> res;
        string s;
        if (n == 1)
            return res;
        for (int i = 1; i < n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                if (gcd(i, j) != 1)
                    continue;
                s = "";
                s += to_string(i);
                s += '/';
                s += to_string(j);
                res.push_back(s);
            }
        }
        return res;
    }
};