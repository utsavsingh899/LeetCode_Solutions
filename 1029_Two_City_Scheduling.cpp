




class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int res = 0;
        
        sort(costs.begin(), costs.end(), [&](vector<int>& a, vector<int>& b) {
            return a[0] - a[1] < b[0] - b[1];
        });
        
        for (int i = 0; i < costs.size() / 2; ++i)
            res += costs[i][0] + costs[i + costs.size() / 2][1];
        
        return res;
    }
};



