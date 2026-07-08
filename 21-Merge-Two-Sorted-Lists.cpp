#include <iostream>
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
private: 
    ListNode* solve(ListNode* first, ListNode* second){
        if(first->next == NULL){
            first->next = second;
            return first;
        }

        ListNode* curr1 = first;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = second;
        ListNode* next2 = curr2->next;

        while(next1 != NULL && curr2 != NULL){
            if((curr1->val <= curr2->val) && (curr2->val <= next1->val)){
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;

                curr1 = curr2;
                curr2 = next2;
            }
            else{
                curr1 = next1;
                next1 = next1->next;
                if(next1 == NULL){
                    curr1->next = curr2;
                    return first;
                }
            }
        }
        return first;
    }

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1->val <= list2->val){
            return solve(list1, list2);
        } else {
            return solve(list2, list1);
        }
    }
};

int main() {
    Solution sol;

    // List 1: 1 -> 3 -> 5 -> NULL
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    // List 2: 2 -> 4 -> 6 -> NULL
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    // Merging both lists
    ListNode* mergedList = sol.mergeTwoLists(list1, list2);

    // Printing the merged sorted list
    ListNode* curr = mergedList;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    return 0;
}