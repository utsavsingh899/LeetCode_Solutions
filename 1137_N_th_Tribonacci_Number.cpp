class Solution {
public:
    int tribonacci(int n) {
        if (n == 0)
            return 0;
        if (n < 3)
            return 1;
        unsigned int a[n + 1];
        a[0] = 0, a[1] = 1, a[2] = 1;
        for (int i = 3; i <= n; ++i)
            a[i] = a[i - 1] + a[i - 2] + a[i - 3];
        return a[n];
    }
};