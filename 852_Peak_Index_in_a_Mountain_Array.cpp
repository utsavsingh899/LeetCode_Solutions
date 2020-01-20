class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int lo = 0, hi = A.size() - 1, mid;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
                return mid;
            else if (A[mid - 1] > A[mid])
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return -1;
    }
};