class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node* front;
    Node* rear;
    int cnt;

public:
    myQueue() {
        front = rear = nullptr;
        cnt = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cnt++;
    }

    void dequeue() {
        if (isEmpty())
            return;

        Node* temp = front;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;
        cnt--;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return front->data;
    }

    int size() {
        return cnt;
    }
};