#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution
{
    bool hasOccurences(string s, string part)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (part[0] == s[i])
            {
                if (s.substr(i, part.length()) == part)
                {
                    return true;
                }
            }
        }
        return false;
    }

public:
    string removeOccurrences(string s, string part)
    {

        if (s.length() < part.length())
        {
            return s;
        }
        string str;

        str.reserve(s.size());
        for (int i = 0; i < s.size(); i++)
        {
            if (part[0] == s[i])
            {
                if (s.substr(i, part.length()) == part)
                {

                    i = i + part.length() - 1;
                    continue;
                }
            }
            str += s[i];
        }
        if (hasOccurences(str, part))
        {
            removeOccurrences(str, part);
        }
        else
        {
            return str;
        }
    }
};

int main()
{
    Solution sol;
    cout << sol.removeOccurrences("daabcbaabcbc", "abc"); // dababc
    return 0;
}