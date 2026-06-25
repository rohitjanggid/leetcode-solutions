#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return 2;
            }
            i++;
            j--;
        }
        return 1;
    }
};

int main()
{
    Solution sol;

    string s = "ababa";

    cout << sol.removePalindromeSub(s);
}