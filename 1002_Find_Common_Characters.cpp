class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> res;
        int freq[A.size()][26];
        int temp = INT_MAX;
        for (int i = 0; i < A.size(); ++i)
            for (int j = 0; j < 26; ++j)
                freq[i][j] = 0;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[i].size(); ++j)
                ++freq[i][A[i][j] - 'a'];
        }
        for (int j = 0; j < 26; ++j) {
            for (int i = 0; i < A.size(); ++i)
                temp = min(temp, freq[i][j]);
            string s = "";
            s += (char)('a' + j);
            while (temp--)
                res.push_back(s);
            temp = INT_MAX;
        }
        return res;
    }   
};