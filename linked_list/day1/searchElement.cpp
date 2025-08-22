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
    bool searchKey(ListNode *head, int key)
    {
        ListNode *temp = head;

        while (temp != nullptr)
        {
            if (temp->data == key)
            {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }
};