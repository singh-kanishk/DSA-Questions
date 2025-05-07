#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> returnInt(string str)
    {
        vector<int> ans = {0};
        for (int i = 0; i < str.size(); i++)
        {
            ans.push_back(str.at(i) - 96);
            ans[0] += str.at(i) - 96;
        }
        int size = ans.size();
        sort(ans.begin() + 1, ans.end());
        return ans;
    }
    bool compareArray(vector<int> v1, vector<int> v2)
    {
        if (v1.size() != v2.size())
            return false;
        for (int i; i < v1.size(); i++)
        {
            if (v1.at(i) != v2.at(i))
                return false;
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> s;
        vector<vector<int>> num;

        return s;
    }
};

int main()
{
    Solution sol;
    vector<int> vec = sol.returnInt("abcd");
    for (int a : vec)
    {
        cout << a << endl;
    }

    return 0;
}