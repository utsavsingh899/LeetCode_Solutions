class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long y = 0, z = x;
        while (z) {
            y = y * 10 + z % 10;
            z /= 10;
        }
        if (x == y)
            return true;
        return false;
    }
};