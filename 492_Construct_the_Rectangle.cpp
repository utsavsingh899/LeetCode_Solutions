






class Solution {
public:
    vector<int> constructRectangle(int area) {
        int res = 0;

        for (int i = 1; i <= sqrt(area); ++i)
            if (area % i == 0)
                res = i;
        
        return {area / res, res};
    }
};





