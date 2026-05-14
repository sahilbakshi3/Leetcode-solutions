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
    
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(-1);

        ListNode* tail = dummy;

        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                tail->next = l1;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2->next;
            }

            tail = tail->next;
        }

        if(l1 != NULL){
            tail->next = l1;
        }

        if(l2 != NULL){
            tail->next = l2;
        }

        return dummy->next;

    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.size() == 0){
            return NULL;
        }

        ListNode* res = lists[0];

        for(int i = 1; i < lists.size(); i++){
            res = merge(res, lists[i]);
        }

        return res;
        
        // vector<int> arr;

        // for(int i = 0; i< lists.size(); i++){
        //     ListNode* temp = lists[i];
        //     while(temp != NULL){
        //         arr.push_back(temp->val);
        //         temp = temp->next;
        //     }
        // }

        // sort(arr.begin(), arr.end());

        // ListNode* dummy = new ListNode(-1);
        // ListNode* tail = dummy;

        // for(int i = 0; i< arr.size(); i++){
        //     tail->next = new ListNode(arr[i]);
        //     tail = tail->next;
        // }

        // return dummy->next;

    }
};