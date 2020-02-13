class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        if (A.size() == 0 || A[0].size() == 0)
            return 0;
        int i, j, res = 0;
        for (j = 0; j < A[0].size(); ++j) {
            for (i = 1; i < A.size(); ++i) {
                if (A[i][j] < A[i - 1][j]) {
                    ++res;
                    break;
                }
            }
        }
        return res;
    }
};