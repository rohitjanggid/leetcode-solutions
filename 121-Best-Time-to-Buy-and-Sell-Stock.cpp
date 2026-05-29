#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int ans = 0;
        while(j < prices.size()){
            if(prices[j] >= prices[i]){
                int profit = prices[j] - prices[i];
                ans = max(ans, profit);
                j++;
            }
            else if(prices[j] < prices[i]){
                i = j;
                j++;

            }
        }
        return ans;
    }
};


int main(){
    Solution sol;

    vector<int> arr = {7, 1, 5, 3, 6, 4};

    cout<<"Maximum Profit is: "<<sol.maxProfit(arr);
}