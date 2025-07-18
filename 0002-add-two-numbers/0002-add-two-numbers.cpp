/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {

        ListNode* dummy = new ListNode(-1);
        ListNode* t1 = head1, * t2 = head2;
        int carry = 0;
        ListNode* curr = dummy;

        while(t1 != NULL || t2 != NULL || carry != 0){
            int sum = 0;

            if(t1 != NULL){
                sum += t1->val;
                t1 = t1->next;
            }
            if(t2 != NULL){
                sum += t2->val;
                t2 = t2->next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);
            curr->next = newNode;
            curr = curr->next;
        }
        return dummy->next;
    }
};