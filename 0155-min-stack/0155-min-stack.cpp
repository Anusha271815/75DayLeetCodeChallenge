class MinStack {
    stack<int> s,help;
public:
    
    void push(int val) {
        s.push(val);
        if(help.empty() || val<=help.top()) help.push(val);
    }
    void pop() {
        if(s.top()==help.top()) help.pop();
        s.pop();
    }
    int top() {
        if(s.empty()) return -1;
        return s.top();
    }
    int getMin() {
        if(help.empty()) return -1;
        return help.top();
    }
};