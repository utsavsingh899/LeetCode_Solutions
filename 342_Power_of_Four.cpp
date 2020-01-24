class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num < 0)
            return false;
        int n0 = 0, n1 = 0;
        while (num) {
            if (num % 2 == 0 && n1 == 0)
                ++n0;
            else if (n1 == 0)
                ++n1;
            else
                return false;
            num /= 2;
        }
        if (n1 == 1 && n0 % 2 == 0)
            return true;
        return false;
    }
};