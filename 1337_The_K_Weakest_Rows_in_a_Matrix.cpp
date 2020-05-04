bool mysort(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i, j;
        vector<pair<int, int>> vc(mat.size());
        vector<int> res(k);
        for (i = 0; i < mat.size(); ++i) {
            for (j = 0; j < mat[0].size(); ++j) {
                if (mat[i][j] == 0)
                    break;
            }
            vc[i] = {i, j};
        }
        sort(vc.begin(), vc.end(), mysort);
        for (i = 0; i < k; ++i)
            res[i] = vc[i].first;
        return res;
    }
};