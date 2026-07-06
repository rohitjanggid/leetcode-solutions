#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        if (node == NULL || node->next == NULL)
            return;
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

void printList(ListNode *head)
{
    ListNode *curr = head;
    while (curr != NULL)
    {
        cout << curr->val;
        if (curr->next != NULL)
            cout << " -> ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original List: ";
    printList(head);

    ListNode *nodeToDelete = head->next;

    Solution sol;
    sol.deleteNode(nodeToDelete);

    cout << "List after deleting 5: "<<endl;
    printList(head);

    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}