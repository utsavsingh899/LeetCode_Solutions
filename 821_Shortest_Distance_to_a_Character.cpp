class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> res(S.size()), left(S.size()), right(S.size());
        int count = 10005;
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == C) {
                left[i] = 0;
                count = 1;
            }
            else
                left[i] = count++;
        }
        count = 10005;
        for (int i = S.size() - 1; i >= 0; --i) {
            if (S[i] == C) {
                right[i] = 0;
                count = 1;
            }
            else
                right[i] = count++;
        }
        for (int i = 0; i < S.size(); ++i)
            res[i] = min(left[i], right[i]);
        return res;
    }
};