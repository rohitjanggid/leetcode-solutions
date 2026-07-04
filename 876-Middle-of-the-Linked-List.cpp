#include <iostream>

using namespace std;

// 1. Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 2. Aapka Solution Class (Ab bilkul sahi logic ke sath)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        temp = head;
        int mid = count / 2;
        while(mid > 0){
            temp = temp->next;
            mid--;
        }
        return temp;
    }
};

// Helper function: Linked list ko print karne ke liye
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// 3. Main Function jo VS Code me run hoga
int main() {
    // Ek simple linked list banate hain: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original Linked List: ";
    printList(head);

    // Solution class ka object bana kar function call karte hain
    Solution sol;
    ListNode* middle = sol.middleNode(head);

    // Middle node se aage ki list print karte hain
    if (middle != nullptr) {
        cout << "Middle Node se start hone wali list: ";
        printList(middle);
        cout << "Middle Node ki value: " << middle->val << endl;
    } else {
        cout << "List empty hai!" << endl;
    }

    // Memory clean up (Good practice)
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}