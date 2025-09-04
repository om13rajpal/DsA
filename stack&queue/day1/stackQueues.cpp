#include <queue>
using namespace std;

class MyStack
{
public:
    queue<int> st;
    MyStack() {}

    void push(int x)
    {
        st.push(x);
        int size = st.size();

        while (size > 1)
        {
            int element = st.front();
            st.pop();
            st.push(element);
            size--;
        }
    }

    int pop()
    {
        int element = st.front();
        st.pop();

        return element;
    }

    int top() { return st.front(); }

    bool empty()
    {
        if (st.empty())
            return true;
        return false;
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