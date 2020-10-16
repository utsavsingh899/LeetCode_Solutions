






class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int, int> mp;
        
        for (int x : candies)
            ++mp[x];
        
        return min(candies.size() / 2, mp.size());
    }
};






