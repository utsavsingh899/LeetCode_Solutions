class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> f(26);
        for (char x : magazine)
            ++f[x - 'a'];
        for (char x : ransomNote) {
            if (f[x - 'a'] <= 0)
                return false;
            --f[x - 'a'];
        }
        return true;
    }
};