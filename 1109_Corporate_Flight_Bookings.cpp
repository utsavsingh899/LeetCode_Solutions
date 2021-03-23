



class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> res(n + 1);
        
        for (auto& q : bookings) {
            res[q[0] - 1] += q[2];
            res[q[1]] -= q[2];
        }
        
        for (int i = 1; i < n; ++i)
            res[i] += res[i - 1];
        
        return {res.begin(), res.end() - 1};
    }
};



