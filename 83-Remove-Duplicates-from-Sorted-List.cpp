#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* prev = head;
        ListNode* curr = head->next; 
        while(curr != NULL){
            if(prev->val == curr->val){
                prev->next = curr->next;
                curr = prev->next;
            }
            else{
                prev = prev->next;
                curr = curr->next;
            }
        }
        return head;
    }
};

ListNode* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << " -> NULL" << endl;
}

// Driver Code
int main() {
    Solution solution;

    vector<int> nums = {1, 1, 2, 3, 3};
    ListNode* head = createLinkedList(nums);

    cout << "Original List: ";
    printList(head);

    head = solution.deleteDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}