class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        int mn = INT_MAX, temp;
        unordered_map<string, int> mp;
        for (int i = 0; i < list1.size(); ++i)
            mp[list1[i]] = i;
        
        for (int i = 0; i < list2.size(); ++i) {
            if (mp.find(list2[i]) != mp.end()) {
                temp = mp[list2[i]] + i;
                if (temp == mn)
                    res.push_back(list2[i]);
                else if (temp < mn) {
                    mn = temp;
                    res.clear();
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};