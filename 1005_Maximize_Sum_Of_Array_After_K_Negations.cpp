

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int res = 0, mn = INT_MAX;
        sort(A.begin(), A.end());
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] < 0 && K > 0) {
                A[i] *= -1;
                --K;
            }
        }
        for (int i = 0; i < A.size(); ++i) {
            res += A[i];
            mn = min(mn, A[i]);
        }

        if (K & 1)
            res -= 2 * mn;

        return res;
    }
};
