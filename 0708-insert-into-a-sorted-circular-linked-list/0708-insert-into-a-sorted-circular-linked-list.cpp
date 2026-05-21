/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:

    Node* insert(Node* head, int insertVal) {

        Node* newNode = new Node(insertVal);

        if (head == NULL) {

            newNode->next = newNode;

            return newNode;
        }

        Node* prev = head;
        Node* curr = head->next;

        while (true) {

            if (prev->val <= insertVal &&
                insertVal <= curr->val) {

                break;
            }

            if (prev->val > curr->val) {

                if (insertVal >= prev->val ||
                    insertVal <= curr->val) {

                    break;
                }
            }

            prev = curr;
            curr = curr->next;

            if (prev == head) {
                break;
            }
        }

        prev->next = newNode;
        newNode->next = curr;

        return head;
    }
};
