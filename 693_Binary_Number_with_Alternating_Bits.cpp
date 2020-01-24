class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp1 = n % 2, temp2;
        n /= 2;
        while (n) {
            temp2 = n % 2;
            if (temp1 == temp2)
                return false;
            n /= 2;
            temp1 = temp2;
        }
        return true;
    }
};