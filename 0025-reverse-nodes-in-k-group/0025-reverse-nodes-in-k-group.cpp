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
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;

        for(int i = 0; i < k; i++) {

            if(temp == NULL) {
                return head;
            }

            temp = temp->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextNode = NULL;

        int count = 0;

        while(curr != NULL && count < k) {

            nextNode = curr->next;

            curr->next = prev;

            prev = curr;

            curr = nextNode;

            count++;
        }

        head->next = reverseKGroup(curr, k);

        return prev;

        // vector<int> arr;

        // ListNode* temp = head;

        // while(temp != NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }

        // for(int i = 0; i + k <= arr.size(); i+=k){
        //     reverse(arr.begin() + i, arr.begin() + i + k);
        // }

        // temp = head;

        // int i = 0;

        // while(temp != NULL){
        //     temp->val = arr[i];
        //     i++;
        //     temp = temp->next;
        // }

        // return head;

    }
};