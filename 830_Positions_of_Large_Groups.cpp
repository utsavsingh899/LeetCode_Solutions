class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        if (S.empty())
            return {};
        
        int lo = 0, hi = 0;
        vector<vector<int>> res;
        char ch = S[0];
        for (int i = 1; i < S.size(); ++i) {
            if (S[i] == ch)
                hi = i;
            else {
                if (hi - lo >= 2)
                    res.push_back({lo, hi});
                lo = i;
                ch = S[i];
            }
        }
        if (hi - lo >= 2)
            res.push_back({lo, hi});
        
        return res;
    }
};