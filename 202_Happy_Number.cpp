class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> cycle;
        int sum;
        while (n != 1) {
            if (cycle.count(n) != 0)
                return false;
            cycle.insert(n);
            sum = 0;
            while (n) {
                sum += pow(n % 10, 2);
                n /= 10;
            } 
            n = sum;
        }
        return true;
    }
};