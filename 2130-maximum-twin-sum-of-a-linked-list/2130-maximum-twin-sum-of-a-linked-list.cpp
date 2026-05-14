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
    int pairSum(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;

            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = slow;

        while(curr != NULL) {

            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;

            curr = nextNode;
        }

        ListNode* first = head;
        ListNode* second = prev;

        int maxi = 0;

        while(second != NULL) {

            maxi = max(maxi,
                       first->val + second->val);

            first = first->next;

            second = second->next;
        }

        return maxi;
        
        // vector<int> arr;

        // ListNode* temp = head;

        // while(temp != NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }

        // int left = 0, right = arr.size() - 1;
        // int maxi = 0;

        // while(left < right){
        //     maxi = max(maxi, arr[left] + arr[right]);
        //     left++;
        //     right--;
        // }

        // return maxi;

    }
};