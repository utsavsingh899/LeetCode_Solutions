

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> mp;
        for (auto cd : cpdomains) {
            int i = cd.find(" ");
            int n = stoi(cd.substr(0, i));
            string str = cd.substr(i + 1);
            for (int i = 0; i < str.size(); ++i)
                if (str[i] == '.')
                    mp[str.substr(i + 1)] += n;
            mp[str] += n;
        }
        vector<string> res;
        for (auto x: mp)
            res.push_back(to_string(x.second) + " " + x.first);
        return res;
    }
};
