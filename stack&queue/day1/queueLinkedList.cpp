class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class LinkedListQueue
{
public:
    Node *head;
    LinkedListQueue()
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
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }

            temp->next = new Node(x);
        }
    }

    int pop()
    {
        Node *front = head;
        int value = head->data;
        head = head->next;

        delete front;
        return value;
    }

    int peek()
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