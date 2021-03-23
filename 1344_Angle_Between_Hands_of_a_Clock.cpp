








class Solution {
public:
    double angleClock(int hour, int minutes) {
        double m = minutes * 6, h = hour * 30 + (double)minutes / 2, diff = abs(h - m);
        return min(diff, 360 - diff);
    }
};







