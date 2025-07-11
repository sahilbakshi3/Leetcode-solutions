/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // vector<ListNode*> ans;

        // ListNode* temp = head;

        // while(temp != NULL){
        //     for(auto it: ans){
        //         if(it == temp) return true;
        //     }
        //     ans.push_back(temp);
        //     temp = temp->next;
        // }
        // return false;

        ListNode* fast = head, *slow = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};