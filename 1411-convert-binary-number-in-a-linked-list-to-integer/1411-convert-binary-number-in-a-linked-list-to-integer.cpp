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
    
    // Reversing the LL using stack S.C = O(N), T.C = O(N) + O(N); 

    // ListNode* reverseList(ListNode* head){
    //     stack<int> s;

    //     ListNode*temp = head;

    //     while(temp != NULL){
    //         s.push(temp->val);
    //         temp = temp->next;
    //     }

    //     temp = head;

    //     while(temp != NULL){
    //         temp->val = s.top();
    //         s.pop();
    //         temp = temp->next;
    //     }
    //     return head;
    // }

    ListNode* reverseList(ListNode* head){
        ListNode* temp = head, *prev = NULL;

        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    
    int getDecimalValue(ListNode* head) {
        ListNode* temp = reverseList(head);

        int i = 0, total = 0;

        while(temp != NULL){
            total += (pow(2, i)) * temp->val;
            i++;
            temp = temp->next;
        }
        return total;
    }
};