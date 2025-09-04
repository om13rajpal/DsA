#include <stack>
using namespace std;

class MyQueue
{

    stack<int> q;
    stack<int> st;

public:
    MyQueue() {}

    void push(int x) { q.push(x); }

    int pop()
    {
        while (!q.empty())
        {
            st.push(q.top());
            q.pop();
        }

        int front = st.top();
        st.pop();

        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        return front;
    }

    int peek()
    {
        while (!q.empty())
        {
            st.push(q.top());
            q.pop();
        }

        int front = st.top();
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        return front;
    }

    bool empty()
    {
        if (q.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */