class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> ans(2);
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int sumA = 0, sumB = 0, tempA, tempB, i, j;
        for (int x: A)
            sumA += x;
        for (int x: B)
            sumB += x;
        i = A.size() - 1;
        j = B.size() - 1;
        while (i >= 0 && j >= 0) {
            tempA = sumA - A[i] + B[j];
            tempB = sumB + A[i] - B[j];
            if (tempA == tempB) {
                ans[0] = A[i];
                ans[1] = B[j];
                break;
            }
            else if (tempA > tempB)
                --j;
            else
                --i;
        }
        return ans;
    }
};