#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int minimum(vector<int> &value, int x, int y)
    {
        if (value.at(x) > value.at(y))
        {
            return value.at(y);
        }

        else
        {
            return value.at(x);
        }
    }
    int maxArea(vector<int> &height)
    {
        int x = 0;
        int y = height.size() - 1;
        int area;
        int maxArea = 0;
        while (y - x > 0)
        {
            area = (y - x) * minimum(height, x, y);
            if (area > maxArea)
            {
                maxArea = area;
            }
            if (height.at(x) == minimum(height, x, y))
            {
                x++;
            }
            else
            {
                y--;
            }
        }

        return maxArea;
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << endl
         << obj.maxArea(vec) << endl;

    return 0;
}