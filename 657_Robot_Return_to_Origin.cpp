



class Solution {
public:
    bool judgeCircle(string moves) {
        int l = 0, r = 0, u = 0, d = 0;
        
        for (char c : moves) {
            if (c == 'L')
                ++l;
            else if (c == 'R')
                ++r;
            else if (c == 'U')
                ++u;
            else if (c == 'D')
                ++d;
        }
        return (l - r == 0) && (u - d == 0);
    }
};


