class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        next = nullptr;
        data = x;
    }
};

class LinkedListStack
{
public:
    Node *head;
    LinkedListStack()
    {
        head = nullptr;
    }

    void push(int x)
    {
        if (head == nullptr)
        {
            head = new Node(x);
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = head;
            head = temp;
        }
    }

    int pop()
    {
        Node *element = head;
        head = head->next;
        int value = element->data;
        delete element;

        return value;
    }

    int top()
    {
        return head->data;
    }

    bool isEmpty()
    {
        if (head == nullptr)
            return true;

        return false;
    }
};