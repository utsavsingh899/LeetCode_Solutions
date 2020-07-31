





class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool inc = 1, dec = 1;
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] > A[i + 1])
                inc = 0;
            if (A[i] < A[i + 1])
                dec = 0;
        }
        
        return inc || dec;
    }
};




