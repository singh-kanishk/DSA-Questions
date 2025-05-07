#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int k = 1; // Index of the next unique element
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[k - 1])
        {
            nums[k] = nums[i]; // Place the unique element at the k-th position
            k++;
        }
    }

    return k; // k is the number of unique elements
}

int main()
{
    vector<int> vec = {1, 1, 2};
    cout << removeDuplicates(vec);
    
    return 0;
}