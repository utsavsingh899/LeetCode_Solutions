

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* t = res;
        int c = 0;
        
        while (c || l1 || l2) {
            c += (l1 ? l1 -> val : 0) + (l2 ? l2 -> val : 0);
            t -> next = new ListNode(c % 10);
            c /= 10;
            
            if (l1)
                l1 = l1 -> next;
            if (l2)
                l2 = l2 -> next;
            t = t -> next;
        }
        
        return res -> next;
    }
};
