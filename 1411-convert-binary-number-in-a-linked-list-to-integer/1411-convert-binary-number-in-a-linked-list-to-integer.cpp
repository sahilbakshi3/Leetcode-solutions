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

    // Reversing the LL using the recursive approach T.C = O(N), S.C = O(1);
    // ListNode* reverseList(ListNode* head){
        
    //     if(head == NULL || head->next == NULL){
    //         return head;
    //     }

    //     ListNode* newHead = reverseList(head->next);
    //     ListNode* front = head->next;

    //     front->next = head;
    //     head->next = NULL;

    //     return newHead;
        
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