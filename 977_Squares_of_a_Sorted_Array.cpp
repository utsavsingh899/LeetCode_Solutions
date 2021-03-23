class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size(), j = 0;

        while (j < n && A[j] < 0)
            ++j;

        int i = j - 1, t = 0;
        
        vector<int> res(n);
        while (j < n && i >= 0) {
            if (A[i] * A[i] < A[j] * A[j])
                res[t++] = A[i] * A[i--];
            else
                res[t++] = A[j] * A[j++];
        }
        while (i >= 0)
            res[t++] = A[i] * A[i--];
        while (j < n)
            res[t++] = A[j] * A[j++];

        return res;
    }
};