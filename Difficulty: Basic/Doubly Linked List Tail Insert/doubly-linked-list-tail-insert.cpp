/* Structure of doubly linked list node
class Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
*/
class Solution {
public:
    Node *insertInTail(Node *head, int data) {
        // code here
        Node *temp = new Node(data);
        if(head==nullptr) return temp;
        Node *curr = head;
        while(curr->next!=nullptr){
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        return head;
    }
};