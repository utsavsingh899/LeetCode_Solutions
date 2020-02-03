class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int i, j, k, m = mat.size(), n = mat[0].size();
        for (k = 0; k < m - 1; ++k)
            for (i = 0; i < m - 1; ++i)
                for (j = 0; j < n - 1; ++j)
                    if (mat[i][j] > mat[i + 1][j + 1])
                        swap(mat[i][j], mat[i + 1][j + 1]);
        return mat;
    }
};