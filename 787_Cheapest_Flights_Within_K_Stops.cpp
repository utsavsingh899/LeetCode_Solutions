



class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<int> cost(n, 1e9);
        
        cost[src] = 0;
        
        for (int i = 0; i <= K; ++i) {
            vector<int> temp(cost);
            for (auto e : flights) 
                temp[e[1]] = min(temp[e[1]], cost[e[0]] + e[2]);
            cost = temp;
        }
        
        return cost[dst] == 1e9 ? -1 : cost[dst];
    }
};


