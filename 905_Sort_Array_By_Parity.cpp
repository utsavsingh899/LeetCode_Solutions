class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> B, C;
        int i, j = 0, k = 0;
        for (i = 0; i < A.size(); ++i) {
            if (A[i] & 1) {
                C.push_back(A[i]);
                ++j;
            }
            else
                B.push_back(A[i]);
        }
        for (i = 0; i < j; ++i)
            B.push_back(C[i]);
        return B;
    }
};
