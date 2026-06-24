#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        while (i < nums.size() && j < nums.size())
        {
            if (nums[i] % 2 == 0)
            {
                i += 2;
            }
            else if (nums[j] % 2 != 0)
            {
                j += 2;
            }
            else
            {
                swap(nums[i], nums[j]);
                j += 2;
                i += 2;
            }
        }
        return nums;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {4, 2, 5, 7};

    vector<int> res = sol.sortArrayByParityII(nums);

    for(int i = 0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}