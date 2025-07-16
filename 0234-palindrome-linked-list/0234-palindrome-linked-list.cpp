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
    
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL, *curr = head;

        while(curr != NULL){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {

        // ListNode* temp = head;
        // vector<int> res;

        // while(temp != NULL){
        //     res.push_back(temp->val);
        //     temp = temp->next;
        // }

        // int i = 0, j = res.size()-1;

        // while(i < j){
        //     if(res[i] != res[j]){
        //         return false;

        //     }
        //     i++;
        //     j--;            
        // }
        // return true;


        // stack<int> st;
        // ListNode* slow = head, *fast = head;

        // while(fast != NULL && fast->next != NULL){
        //     st.push(slow->val);
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }

        // if(fast){
        //     slow = slow->next;
        // }

        // while(slow != NULL){
        //     if(st.top() != slow->val){
        //         return false;
        //     }
        //     st.pop();
        //     slow = slow->next;
        // }
        // return true;
        

        ListNode* slow = head, *fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* rev = reverseList(slow);
        while(rev != NULL){
            if(head->val != rev->val){
                return false;
            }
            head = head->next;
            rev = rev->next;
        }
        return true;
    }
};