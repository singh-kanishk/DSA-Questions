//took help for minstack vector idea 

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    vector<int> stack;
    vector<int> minStack;

public:
    MinStack() {}

    void push(int val) {
        stack.push_back(val);
       
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        } else {
            
            minStack.push_back(minStack.back());
        }
    }

    void pop() {
        if (!stack.empty()) {
            stack.pop_back();
            minStack.pop_back();
        }
    }

    int top() {
        if (!stack.empty())
            return stack.back();
        throw runtime_error("Stack is empty");
    }

    int getMin() {
        if (!minStack.empty())
            return minStack.back();
        throw runtime_error("Stack is empty");
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main()
{
    MinStack min;
    min.push(2);
    min.push(0);
    min.push(3);
    min.push(0);
    min.pop();
    min.pop();
    min.pop();

    
    min.push(10);
    min.push(-32);
    cout << min.getMin();
    return 0;
}