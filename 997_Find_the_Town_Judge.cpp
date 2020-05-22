class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> cnd(N + 1, 0), to(N + 1, 0);
        for (auto x : trust) {
            ++cnd[x[1]];
            ++to[x[0]];
        }
        for (int i = 1; i <= N; ++i)
            if (to[i] == 0 && cnd[i] == N - 1)
                return i;
        return -1;
    }
};