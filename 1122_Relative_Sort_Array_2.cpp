class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> dp(1001, 0);
        vector<int> res;
        for (auto x: arr1)
            ++dp[x];
        for (auto x: arr2)
            while (dp[x]) {
                res.push_back(x);
                --dp[x];
            }
        for (int i = 1; i <= 1000; ++i)
            while (dp[i]) {
                res.push_back(i);
                --dp[i];
            }
        return res;
    }
};