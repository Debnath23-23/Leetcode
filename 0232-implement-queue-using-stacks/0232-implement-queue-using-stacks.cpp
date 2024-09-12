 class MyQueue {
public:
    stack<int> input, output; 

    MyQueue() {
        
    }
    
    // Push element x to the back of the queue
    void push(int x) {
        input.push(x); // Push element onto input stack
    }
    
    // Removes the element from the front of the queue and returns it
    int pop() {
        if (output.empty()) {
            // Transfer elements from input to output if output is empty
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int frontElement = output.top();
        output.pop(); // Pop the front element from output stack
        return frontElement;
    }
    
    // Get the front element of the queue
    int peek() {
        if (output.empty()) {
            // Transfer elements from input to output if output is empty
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top(); // The front element is at the top of output stack
    }
    
    // Returns whether the queue is empty
    bool empty() {
        // The queue is empty only if both stacks are empty
        return input.empty() && output.empty();
    }
};

 