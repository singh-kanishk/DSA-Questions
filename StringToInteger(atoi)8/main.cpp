#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution
{
public:
    bool isDigit(char c)
    {
        return c >= '0' && c <= '9';
    }
    int myAtoi(string s)
    {
        int i = 0, n = s.size();
        // Skip leading whitespaces
        while (i < n && s[i] == ' ')
        {
            i++;
        }

        // Handle sign
        bool isNegative = false;
        if (i < n && (s[i] == '-' || s[i] == '+'))
        {
            isNegative = (s[i] == '-');
            i++;
        }

        // Parse digits and build the number
        long result = 0; // Use long to handle overflow
        while (i < n && isDigit(s[i]))
        {
            result = result * 10 + (s[i] - '0');
            if (result > INT_MAX)
            {
                return isNegative ? INT_MIN : INT_MAX;
            }
            i++;
        }

        return isNegative ? -result : result;
    }
};

int main()
{
    Solution obj;
    cout << obj.myAtoi("   -123e") << endl; // Expected output: -123
    return 0;
}
