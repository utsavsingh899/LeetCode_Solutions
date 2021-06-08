class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        // c0 = cost till current step 
        // c1 = cost till current - 1 step 
        // c2 = cost till current - 2 step 
        
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i = 2; i <= n; ++i) {
            c2 = min(c1 + cost[i - 1], c0 + cost[i - 2]);
            c0 = c1;
            c1 = c2;
        }
        
        return c2;
    }
};