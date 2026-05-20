/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next)
 *         : val(x), next(next) {}
 * };
 */

class Solution {
public:

    ListNode* reverse(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr) {

            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* plusOne(ListNode* head) {

        head = reverse(head);

        ListNode* curr = head;

        int carry = 1;

        while (curr && carry) {

            int sum = curr->val + carry;

            curr->val = sum % 10;

            carry = sum / 10;

            if (carry && curr->next == NULL) {
                curr->next = new ListNode(0);
            }

            curr = curr->next;
        }

        return reverse(head);
    }
};
