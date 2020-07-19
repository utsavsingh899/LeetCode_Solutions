


class Solution {
public:
    int lastRemaining(int n) {
        int step = 1, head = 1;
        bool dir = 1;
        
        while (n > 1) {
            if (dir)
                head += step;
            else
                head += (n & 1 ? step : 0);
            step *= 2;
            n /= 2;
            dir ^= 1;
        }
        
        return head;
    }
};


