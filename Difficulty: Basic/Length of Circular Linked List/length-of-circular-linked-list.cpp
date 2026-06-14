/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    int getLength(Node *head) {
        // code here
        if(head == NULL) return 0;

        int cnt = 0;
        Node* curr = head;

        do {
            cnt++;
            curr = curr->next;
        } while(curr != head);

        return cnt;
    }
};