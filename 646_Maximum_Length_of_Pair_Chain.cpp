
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if (pairs.size() == 0)
            return 0;
        
        sort(pairs.begin(), pairs.end(), [&](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        
        int res = 1, i = 0, j = 1;
        while (j < pairs.size()) {
            if (pairs[i][1] < pairs[j][0]) {
                ++res;
                i = j;
            }
            ++j;
        }
        
        return res;
    }
};
