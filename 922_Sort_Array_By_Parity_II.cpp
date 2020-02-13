class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i = 0, j;
        while (i < A.size()) {
            if (i % 2 == 0 && A[i] % 2 == 1) {
                j = i + 1;
                while (j < A.size() && A[j] % 2 != 0)
                    ++j;
                swap(A[i], A[j]);
            }
            else if (i % 2 == 1 && A[i] % 2 == 0) {
                j = i + 1;
                while (j < A.size() && A[j] % 2 != 1)
                    ++j;
                swap(A[i], A[j]);
            }
            ++i;
        }
        return A;
    }
};