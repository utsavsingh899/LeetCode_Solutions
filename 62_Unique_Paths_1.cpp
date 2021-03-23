





class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m + n - 2;
        int R = m - 1;
        
        double res = 1.0;
        for (int i = 1; i <= R; ++i)
            res = res * (N - i + 1) / i;
        
        return round(res);
    }
};





