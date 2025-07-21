class MyStack {
public:

    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        int sz = q.size();
        q.push(x);

        for(int i = 0; i< sz; i++){
            int fr = q.front();
            q.pop();
            q.push(fr);
        }
    }
    
    int pop() {
        int fr = q.front();
        q.pop();
        return fr;
        
    }
    
    int top() {
        int fr = q.front();
        return fr;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */