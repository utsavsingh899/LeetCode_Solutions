class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int mx = -1, curr = 0, i, a, b;
        for (i = 0; i < seats.size(); ++i) {
            if (seats[i] == 0)
                ++curr;
            else {
                mx = max(curr, mx);
                curr = 0;
            }
        }
        for (i = 0; i < seats.size(); ++i)
            if (seats[i] == 1) {
                a = i;
                break;
            }
        for (i = seats.size() - 1; i >= 0; --i) 
            if (seats[i] == 1) {
                b = seats.size() - i - 1;
                break;
            }
        mx = max(curr, mx);
        // cout << mx << " " << a << " " << b << "\n";
        mx = (mx + 1) / 2;
        // cout << mx << " " << a << " " << b << "\n";
        return max({mx, a, b});
    }
};