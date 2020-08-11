class Solution {
    int kadane(vector<int>& A, int s, int e, int sign) {
        int res = -100000, curr = -100000;
        for (int i = s; i < e; ++i) {
            curr = sign * A[i] + max(curr, 0);
            res = max(res, curr);
        }
        return res;
    }
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int s = 0, res, ans1, ans2, ans3;
        for (int x : A)
            s += x;
        ans1 = kadane(A, 1, A.size(), -1);
        ans2 = kadane(A, 0, A.size() - 1, -1);
        ans3 = kadane(A, 0, A.size(), 1);
        return max(ans3, max(s + ans1, s + ans2));
    }
};