class Solution {
public:
    int digitSum(int num) {
        int temp, sum = 0;
        while (num != 0)
        {
            temp = num % 10;
            sum += temp;
            num /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        int mod = digitSum(num) % 9;
        if (digitSum(num) == 0)
            return 0;
        else if (mod == 0)
            return 9;
        else
            return mod;
    }
};
