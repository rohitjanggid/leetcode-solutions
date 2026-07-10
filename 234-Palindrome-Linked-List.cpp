#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        while(head != NULL){
            arr.push_back(head->val);
            head = head->next;
        }

        int s = 0;
        int e = arr.size()-1;
        while(s < e){
            if(arr[s++] != arr[e--]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Palindrome Linked List create karte hain: 1 -> 2 -> 2 -> 1 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    // Function call karke check karte hain
    if (solution.isPalindrome(head)) {
        cout << "Result: True (It is a palindrome)" << endl;
    } else {
        cout << "Result: False (It is not a palindrome)" << endl;
    }

    return 0;
}