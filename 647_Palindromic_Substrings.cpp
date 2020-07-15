

class Solution {
public:
    int countSubstrings(string s) {
        int res = 0, left, right;
        
        for (int centre = 0; centre < 2 * s.size() - 1; ++centre) {
            left = centre / 2;
            right = left + (centre % 2);
            
            while (0 <= left && right < s.size() && s[left] == s[right]) {
                ++res;
                --left;
                ++right;
            }
        }
        
        return res;
    }
};

