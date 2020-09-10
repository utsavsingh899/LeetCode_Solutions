class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = 0;
        
        for (int x : nums)
            switch(x) {
                case 0:
                    ++r; break;
                case 1:
                    ++w; break;
                case 2:
                    ++b; break;
            }
        
        for (int& x : nums) {
            if (r != 0)
                x = 0, --r;
            else if (w != 0)
                x = 1, --w;
            else if (b != 0)
                x = 2, --b;
        }
    }
};