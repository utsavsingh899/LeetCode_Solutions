
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return {};
        
        vector<int> ans;
        vector<vector<int>> mp(matrix.size() + matrix[0].size() - 1);
        
        for (int i = 0; i < matrix.size(); ++i)
            for (int j = 0; j < matrix[0].size(); ++j)
                mp[i + j].push_back(matrix[i][j]);
        
        for (int i = 0; i < mp.size(); i += 2)
            reverse(mp[i].begin(), mp[i].end());
        
        for (int i = 0; i < mp.size(); ++i)
            for(int j = 0; j < mp[i].size(); ++j)
                ans.push_back(mp[i][j]);
        
        return ans;
    }
};