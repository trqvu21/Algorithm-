//https://leetcode.com/problems/implement-queue-using-stacks/?envType=problem-list-v2&envId=w5srjw5v
class MyQueue {
private:
    stack<int> s_input;  
    stack<int> s_output; 

public:
    MyQueue() {
        
    }
    
    
    void push(int x) {
        s_input.push(x);
    }
    
   
    int pop() {
       
        if (s_output.empty()) {
            moveInputToOutput();
        }
        
   
        int val = s_output.top();
        s_output.pop();
        return val;
    }
    

    int peek() {
        if (s_output.empty()) {
            moveInputToOutput();
        }
        return s_output.top();
    }
    

    bool empty() {
        return s_input.empty() && s_output.empty();
    }

private:
 
    void moveInputToOutput() {
        while (!s_input.empty()) {
            s_output.push(s_input.top());
            s_input.pop();
        }
    }
};