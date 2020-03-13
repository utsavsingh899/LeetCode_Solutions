class Solution {
public:
    string generateTheString(int n) {
        string res = "";
        if (n & 1) {
            while (n--)
                res += 'a';
        }
        else {
            --n;
            while (n--)
                res += 'a';
            res += 'b';
        }
        return res;
    }
};