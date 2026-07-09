#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;

    // Nodes create karte hain: 1 -> 2 -> 3 -> 4
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);

    // Nodes ko connect karte hain
    head->next = second;
    second->next = third;
    third->next = fourth;
    
    // Yahan ek cycle banate hain: 4 ko vapas 2 se connect kar dete hain (4 -> 2)
    fourth->next = second;

    // Function call karke check karte hain
    if (solution.hasCycle(head)) {
        cout << "Cycle detected: True" << endl;
    } else {
        cout << "No cycle: False" << endl;
    }

    return 0;
}