class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        int mindiff = INT_MAX;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; ++i)
            mindiff = min(mindiff, arr[i + 1] - arr[i]);
        for (int i = 0; i < arr.size() - 1; ++i)
            if (arr[i + 1] - arr[i] == mindiff)
                res.push_back({arr[i], arr[i + 1]});
        return res;
    }
};