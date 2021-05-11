class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trustFactor(N + 1, 0);
        
        for (auto& edge : trust) {
            ++trustFactor[edge[1]];
            --trustFactor[edge[0]];
        }
        
        for (int i = 1; i <= N; ++i)
            if (trustFactor[i] == N - 1)
                return i;
        
        return -1;
    }
};