#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> nums3;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            nums3.push_back(nums2[j]);
            j++;
        }
        nums1 = nums3;
    }
};

int main() {
    Solution sol;

    // LeetCode Example 1
    // nums1 ke paas m + n elements ki jagah honi chahiye, isliye size 6 hai aur baki 0 hain
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    cout << "Before Merge, nums1: ";
    for (int num : nums1) cout << num << " ";
    cout << "\n";

    // Function Call
    sol.merge(nums1, m, nums2, n);

    // Output Print karna
    cout << "After Merge, nums1:  ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}