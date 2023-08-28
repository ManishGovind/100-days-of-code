class MyStack {
public:
    MyStack() {
        
    }
    queue <int> q;
     
    void push(int x) {
        q.push(x);
        int n = q.size() - 1;
        for (int i = 0; i < n ; ++i) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();


    }
};
