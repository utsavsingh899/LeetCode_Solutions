class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.size() == 0)
            return 0;
        int i;
        for (i = 0; i < s.size() / 2; ++i)
            if (s[i] != s[s.size() - i - 1])
                break;
        if (i == s.size() / 2)
            return 1;
        return 2;
    }
};