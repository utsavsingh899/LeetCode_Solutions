class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.size() == 0)
            return ans;
        int i, j, m = matrix.size(), n = matrix[0].size();
        if (m == 0 || n == 0)
            return ans;
        vector<vector<int>> mp(m + n - 1);
        for (i = 0; i < m; ++i) {
            for (j = 0; j < n; ++j)
                mp[i + j].push_back(matrix[i][j]);
        }
        for (i = 0; i < mp.size(); i += 2)
            reverse(mp[i].begin(), mp[i].end());
        for (i = 0; i < mp.size(); ++i)
            for(j = 0; j < mp[i].size(); ++j)
                ans.push_back(mp[i][j]);
        return ans;
    }
};