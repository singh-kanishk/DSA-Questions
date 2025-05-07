#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string str;
        if (s.empty())
            return str;

        for (char ch : s)
        {
            if (!str.empty() && str.back() == ch)
            {
                str.pop_back();
            }
            else
            {
                str.push_back(ch);
            }
        }
        return str;
    }
};

int main()
{

    Solution sol;
    cout << sol.removeDuplicates("abbac");
}