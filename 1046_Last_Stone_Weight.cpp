class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> rocks;
        int top1, top2;
        for (int x: stones)
            rocks.push(x);
        while (rocks.size() > 1) {
            top1 = rocks.top();
            rocks.pop();
            top2 = rocks.top();
            rocks.pop();
            if ((top1 - top2) != 0)
                rocks.push(top1 - top2);
            else
                rocks.push(0);
        }
        return rocks.top();
    }
};
