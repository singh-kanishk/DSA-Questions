#include <bits/stdc++.h>
using namespace std;

class Solution
{

    string changeCase(string s)
    {
        string ans;
        ans.reserve(s.length());

        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z')
            {
                ans.push_back(c + ('a' - 'A'));
            }
            else if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            {
                ans.push_back(c);
            }
        }

        return ans;
    }

public:
    bool isPalindrome(string s)
    {
        string changedCase = changeCase(s);
        int length = changedCase.length();
        if (length == 0)
            return true;
        for (int i = 0; i <= (length - 1) / 2; i++)
        {
            if (changedCase.at(i) != changedCase.back())
            {
                return false;
            }
            changedCase.pop_back();
        }
        return true;
    }
};
int main()
{
    cout << (char)48 << (char)57;
    string s;
    Solution sol;
    cout << sol.isPalindrome("L'o;l");
}
