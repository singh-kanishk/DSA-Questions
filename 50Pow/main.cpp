#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = x;

        if (n == 0 || x == 1)
            return 1;

        if (x == 0 || n < INT16_MIN)
            return 0;

        if (n == 1)
            return x;

        for (int i = 1; i < n; i++)
        {
            ans *= x;
        }
        if (n > 0)
        {
            return ans;
        }
        else
        {
            return 1 / (ans * x);
        }
    }
};

int main()
{
    Solution sol;
    cout << sol.myPow(34.00515, -3);
    return 0;
}