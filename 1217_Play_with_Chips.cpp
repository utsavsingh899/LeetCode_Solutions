class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd = 0, even = 0;
        for (auto x : chips) {
            if (x & 1)
                ++odd;
            else
                ++even;
        }
        return min(odd, even);
    }
};