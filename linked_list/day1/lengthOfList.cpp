#include <vector>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val) : data(val), next(nullptr) {}
};

class Solution
{
public:
    int getLength(ListNode *head)
    {
        ListNode *temp = head;
        int length = 0;

        while (temp != nullptr)
        {
            length++;
            temp = temp->next;
        }

        return length;
    }
};