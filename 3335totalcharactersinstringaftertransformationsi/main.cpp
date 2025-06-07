#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthAfterTransformations(string s, int t)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == 'z')
            {
                s.insert(i, "ab");
            }
            else
            {
                s.at(i)++;
            }
        }
        cout << s << endl;
        return s.length();
        // kanishk Sisnh is cout hello world how arff eu why error is showingf
    }
};

int main()
{
    Solution sol;
    sol.lengthAfterTransformations("abcdeyz", 2);
    return 0;
}