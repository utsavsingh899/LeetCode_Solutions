class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int f0 = 0, f1 = 0, f2 = 0, res = 0;
        /*
           * f0 is cost till current step
           * f1 is cost till first step above current
           * f2 is cost till second step above current
        */
        for (int i = cost.size() - 1; i >= 0; --i) {
            f2 = f1;
            f1 = f0;
            f0 = cost[i] + min(f1, f2);
        }
        return min(f0, f1);
    }
};