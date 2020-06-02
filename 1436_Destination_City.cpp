class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> in, out;
        for (auto x : paths) {
            ++in[x[0]];
            ++out[x[1]];
        }
        for (auto x : paths) {
            if (in[x[1]] == 0)
                return x[1];
        }
        return "";
    }
};