class ArrayStack {
public:
    int top;
    int arr[100];
    
    ArrayStack() {
        top = -1;
    }
    
    void push(int x) {
        top++;
        arr[top] = x;
    }
    
    int pop() {
        if(top != -1){
            int front = arr[top];
            top--;
            return front;
        }
    }
    
    int top() {
        return arr[top];
    }
    
    bool isEmpty() {
        if(top == -1){
            return true;
        } else {
            return false;
        }
    }
};