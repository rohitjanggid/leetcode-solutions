#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        vector<int> arr;
        while (head != NULL)
        {
            arr.push_back(head->val);
            head = head->next;
        }

        int ans = 0;
        int count = 0;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                ans += pow(2, count);
            }
            count++;
        }
        return ans;
    }
};

ListNode* insertAtHead(const vector<int>& nums){
    ListNode* head = new ListNode(nums[0]);
    ListNode * curr = head;
    for(size_t i = 1; i<nums.size(); ++i){
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
}

int main(){
    Solution sol;

    vector<int> nums = {1, 0, 1};
    ListNode* head = insertAtHead(nums);

    int res = sol.getDecimalValue(head);

    cout<<"Decimal is: "<<res<<endl;
}