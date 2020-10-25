


class Solution {
public:
    Node* connect(Node* root) {
        Node *head = root;
        while (head && head -> left) {
            Node *curr = head;
            while (curr) {
                curr -> left -> next = curr -> right;
                curr -> right -> next = curr -> next ? curr -> next -> left : NULL;
                
                curr = curr -> next;
            }
            head = head -> left;
        }
        
        return root;
    }
};


