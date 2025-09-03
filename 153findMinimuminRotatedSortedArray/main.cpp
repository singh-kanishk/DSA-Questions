#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {

        int mid, a = 0, b = nums.size() - 1;
        if ((nums.at(a) < nums.at(b))||nums.size()<=1)
        {
            return nums.at(a);
        }

        while (a < b)
        {
            mid = (a + b) / 2;
          
             if (nums.at(mid) < nums.at(b))
            {
                b=mid;
                                
            }
            else
            {
                a=mid+1;
                
            }
        }
        return nums.at(a);
    }

};

int main()
{
    vector<int> vec={2,1};
    Solution sol;
    cout<<sol.findMin(vec);
    return 0;
}