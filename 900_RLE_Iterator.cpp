class RLEIterator {
    int p, q;
    vector<int> v;
public:
    RLEIterator(vector<int>& A) {
        v = A;
        p = 0, q = 0;
    }
    
    int next(int n) {
        while (p < v.size()) {
            if (n + q > v[p]) {
                n -= v[p] - q;
                q = 0;
                p += 2;
            }
            else {
                q += n;
                return v[p + 1];
            }
        }
        
        return -1;
    }
};