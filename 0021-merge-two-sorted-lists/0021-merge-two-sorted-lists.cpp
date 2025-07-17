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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        // if(list1==NULL && list2==NULL)
        // return NULL;
        // ListNode *t1=list1, *t2=list2;
        // vector<int> arr;
        // while(t1!=NULL)
        // {
        //     arr.push_back(t1->val);
        //     t1=t1->next;
        // }
        // while(t2!=NULL)
        // {
        //     arr.push_back(t2->val);
        //     t2=t2->next;
        // }
        // sort(arr.begin(),arr.end());
        // ListNode* node = new ListNode(arr[0]);
        // ListNode *head=node;
        // for(int i=1;i<arr.size();i++)
        // {
        //     ListNode* temp=new ListNode(arr[i]);
        //     node->next=temp;
        //     node=temp;
        // }
        // return head;

        if(head1 == NULL && head2 == NULL){
            return NULL;
        }
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;

        ListNode * dummyNode = new ListNode(-1);

        ListNode* temp = dummyNode;

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val < temp2->val){
                temp->next = temp1;
                temp = temp1;
                temp1 = temp1->next;
            }
            else{
                temp->next = temp2;
                temp = temp2;
                temp2 = temp2->next;
            }
        }

        if(temp1){
            temp->next = temp1;
        }
        else{
            temp->next = temp2;
        }
        return dummyNode->next;
    }
};