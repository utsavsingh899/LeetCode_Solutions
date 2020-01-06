class Solution {
public:
    int subtractProductAndSum(int n) {
        long long prod = 1, sum = 0, temp;
        while (n) {
            temp = n % 10;
            prod *= temp;
            sum += temp;
            n /= 10;
        }
        return prod - sum;
    }
};