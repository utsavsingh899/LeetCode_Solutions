


class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        long long res = 0, n = A.size(), temp = 0, sum = 0;
        
        for (int i = 0; i < n; ++i) {
            sum += A[i];
            temp += i * A[i];
        }
        
        res = temp;
        
        for (int i = n - 1; i > 0; --i) {
            temp = temp - (n - 1) * A[i] + (sum - A[i]);
            res = max(res, temp);
        }
        
        return res;
    }
};

