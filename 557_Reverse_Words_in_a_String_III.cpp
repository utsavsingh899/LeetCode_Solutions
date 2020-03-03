class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string curr = "", res = "";
        for (auto x: s) {
            if (x == ' ') {
                words.push_back(curr);
                curr = "";
            }
            else
                curr += x;
        }
        words.push_back(curr);
        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words[i].size() / 2; ++j)
                swap(words[i][j], words[i][words[i].size() - j - 1]);
            res += words[i];
            res += ' ';
        }
        res.erase(res.begin() + s.size());
        return res;
    }
};