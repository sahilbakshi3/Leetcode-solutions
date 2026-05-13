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
    
    int getLength(ListNode* head){
        if(head == NULL) return 0;
        
        int cnt = 0;

        while(head != NULL){
            cnt++;
            head = head->next;
        }

        return cnt;

    }
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;

        ListNode* t1 = headA;
        ListNode* t2 = headB;

        while(t1 != t2){

            t1 = (t1 == NULL) ? headB : t1->next;
            t2 = (t2 == NULL) ? headA : t2->next;
        }

        return t1;

        // int l1 = getLength(headA);
        // int l2 = getLength(headB);

        // ListNode* t1 = headA;
        // ListNode* t2 = headB;

        // if(l1 > l2){
        //     int diff = l1 - l2;

        //     while(diff--){
        //         t1 = t1->next;
        //     }

        // }

        // else{
        //     int diff = l2 - l1;

        //     while(diff--){
        //         t2 = t2->next;
        //     }
        // }

        // while(t1 != t2){
        //     t1 = t1->next;
        //     t2 = t2->next;
        // }

        // return t1;

        // unordered_map<ListNode*, int> mp;

        // ListNode* temp = headA;

        // while(temp != NULL){
        //     mp[temp] = 1;
        //     temp = temp->next;
        // }

        // temp = headB;

        // while(temp != NULL){
        //     if(mp.find(temp) != mp.end()){
        //         return temp;
        //     }
        //     else{
        //         temp = temp->next;
        //     }
        // }


        // return NULL;

    }
};