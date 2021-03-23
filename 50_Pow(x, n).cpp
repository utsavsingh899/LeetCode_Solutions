


class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        
        bool flag = false;
        if (n < 0)
            flag = true;
        
        while (n) {
            if (n & 1)
                res *= x;
            
            n /= 2;
            x *= x;
        }
        
        return flag ? 1 / res : res;
    }
};

