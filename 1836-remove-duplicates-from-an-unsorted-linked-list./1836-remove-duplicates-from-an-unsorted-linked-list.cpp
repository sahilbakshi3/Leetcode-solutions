class Solution {
public:
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
        
        unordered_map<int, int> freq;

        ListNode* temp = head;

        while (temp) {
            freq[temp->val]++;
            temp = temp->next;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* pre = dummy;
        ListNode* cur = head;

        while (cur) {
            if (freq[cur->val] > 1) {
                pre->next = cur->next;
            } else {
                pre = cur;
            }

            cur = cur->next;
        }

        return dummy->next;
    }
};
