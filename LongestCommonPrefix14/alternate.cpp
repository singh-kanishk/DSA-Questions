#include <iostream>
#include <VECTOR>
#include <STRING>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        if (strs.empty())
        {
            return "";
        }
        string s = strs[0];
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (j < s.size() && j < strs[i].size())
            {
                if (s[j] != strs[i][j])
                {
                    break;
                }
                else
                {
                    j++;
                }
            }
            s = s.substr(0, j);
            if (s.empty())
            {
                return "";
            }
        }
        return s;
    }
};
int main()
{
    vector<string> x;
    x.push_back("flow");
    x.push_back("floght");
    x.push_back("flower");
    Solution obj;
    cout << obj.longestCommonPrefix(x);
    return 0;
}