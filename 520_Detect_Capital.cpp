



class Solution {
public:
    bool detectCapitalUse(string word) {
        int f = 0;
        
        for (char ch : word)
            if (isupper(ch))
                ++f;
        
        if (f == 1 && isupper(word[0]))
            return true;
        else if (f == 0 || f == word.size())
            return true;
        
        return false;
    }
};



