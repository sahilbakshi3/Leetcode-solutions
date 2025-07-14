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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        // vector<ListNode*> ans;

        // ListNode* temp = head;

        // while(temp != NULL){
        //     ans.push_back(temp);
        //     temp = temp->next;
        // }

        // for(int i = ans.size() - 1; i > 0; i--){
        //     ans[i]->next = ans[i-1];
        // }
        
        // ans[0]->next = NULL;
        // return ans.back();

        // stack<int> st;

        // ListNode* temp = head;

        // while(temp != NULL){
        //     st.push(temp->val);
        //     temp = temp->next;
        // }

        // temp = head;
        // while(temp != NULL){
        //     temp->val = st.top();
        //     st.pop();
        //     temp = temp->next;
        // }
        // return head;

        ListNode* temp = head, *prev = NULL;

        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;

    }
};