
class Solution {
public:
    int nthUglyNumber(int n, int A, int B, int C) {
        long a = long(A), b = long(B), c = long(C);
        long ab = a * b / __gcd(a, b);
        long bc = b * c / __gcd(b, c);
        long ca = c * a / __gcd(c, a);
        long abc = a * bc / __gcd(a, bc);
        
        int lo = 1, hi = 2 * (int)1e9, mid, temp;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            temp = mid / a + mid / b + mid / c - mid / ab - mid / bc - mid / ca + mid / abc;
            if (temp < n)
                lo = mid + 1;
            else
                hi = mid;
        }
        
        return lo;
    }
};
