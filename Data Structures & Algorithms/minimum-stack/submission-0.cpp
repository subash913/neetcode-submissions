class MinStack {
public:
    vector<vector<int>> stack;
    MinStack() {
        
    }
    
    void push(int val) {
        if (stack.empty()) {
            stack.push_back({val,val});
        } else {
            if (val < stack.back()[1]) {
                stack.push_back({val,val});
            } else {
                stack.push_back({val, stack.back()[1]});
            }
        }
        
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back()[0];
    }
    
    int getMin() {
        return stack.back()[1];
    }
};
