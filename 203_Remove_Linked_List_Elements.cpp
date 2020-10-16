
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head -> val == val)
            head = head -> next;
        
        if (head == NULL)
            return NULL;
        
        ListNode* ptr = head, *back = NULL;
        while (ptr != NULL) {
            if (ptr -> val == val) {
                back -> next = ptr -> next;
                ptr = ptr -> next;
            }
            else {
                back = ptr;
                ptr = ptr -> next;
            }
        }
        
        return head;
    }
};