#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA = headA;
        ListNode* pB = headB;

        while(pA != pB){
            pA = (pA == NULL)? headB : pA->next;
            pB = (pB == NULL)? headA : pB->next;
        }
        return pA;
    }
};

int main() {
    Solution solution;

    ListNode* intersectNode = new ListNode(8);
    intersectNode->next = new ListNode(9);

    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = intersectNode;

    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersectNode; 

    ListNode* result = solution.getIntersectionNode(headA, headB);

    if (result != NULL) {
        cout << "Intersection Node Value: " << result->val << endl;
    } else {
        cout << "No Intersection" << endl;
    }

    return 0;
}