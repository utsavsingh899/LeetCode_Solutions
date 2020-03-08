class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<pair<string, string>> adrs;
        string curr_ads, curr_dmn;
        bool flag, pls;
        for (auto str: emails) {
            flag = false;
            pls = false;
            curr_ads = "";
            curr_dmn = "";
            for (auto x: str) {
                if (flag)
                    curr_dmn += x;
                else if (x == '@')
                    flag = true;
                else if (pls)
                    continue;
                else if (x == '+') {
                    pls = true;
                    continue;
                }
                else if (x == '.')
                    continue;
                else
                    curr_ads += x;
            }
            adrs.insert({curr_ads, curr_dmn});
        }
        return adrs.size();
    }
};