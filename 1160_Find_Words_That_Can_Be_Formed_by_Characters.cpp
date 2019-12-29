class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> freq;
        unordered_map<char, int> temp;
        int ans = 0, i;
        bool flag;
        for (char x: chars)
            ++freq[x];
        for (i = 0; i < words.size(); ++i) {
            flag = false;
            temp = freq;
            for (char x: words[i])
                if ( --temp[x] < 0) {
                    flag = true;
                    break;
                }
            if (!flag)
                ans += words[i].size();
        }
        return ans;
    }
};