

class Solution {
public:
    string toGoatLatin(string S) {
        unordered_set<char> vowel({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        istringstream iss(S);
        
        string res, w;
        int count = 0;
        while (iss >> w) {
            res += ' ' + (vowel.count(w[0]) == 1 ? w : w.substr(1) + w[0]) + "ma";
            
            ++count;
            
            for (int i = 0; i < count; ++i)
                res += 'a';
        }
        
        return res.substr(1);
    }
};
