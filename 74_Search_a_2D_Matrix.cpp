
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty())
        return false;

        int m = matrix.size(), n = matrix[0].size();
        int lo = 0, mid, hi = m * n - 1;

        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;

            if (matrix[mid / n][mid % n] == target)
                return true;
            else if (matrix[mid / n][mid % n] > target)
                hi = mid - 1;
            else
                lo = mid + 1;
        }

        return false;
    }
};
