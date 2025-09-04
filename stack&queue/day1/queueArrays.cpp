class ArrayQueue {
public:
    int front;
    int rear;

    int queue[100];

    ArrayQueue() {
        front = -1;
        rear = -1;
    }
    
    void push(int x) {
        if(front == -1){
            rear++;
            queue[rear] = x;
            front = 0;
        } else {
            rear++;
            queue[rear] = x;
        }
    }
    
    int pop() {
        if(front <= rear){
        int element = queue[front];
        front++;
        return element;
        }

        return -1;
    }
    
    int peek() {
        if(front <= rear && front != -1){

        return queue[front];
        }
        return -1;
    }
    
    bool isEmpty() {
        if(front > rear || front == -1) return true;
        return false;
    }
};