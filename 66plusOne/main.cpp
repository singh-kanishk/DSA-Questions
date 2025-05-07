#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> plusOne(vector<int> &digits)
  {
    int i = digits.size() - 1;

    while (i >= 0)
    {
      if (digits[i] == 9)
      {
        digits[i] = 0;
      }
      else
      {
        digits[i]++;
        return digits;
      }
      i--;
    }

        digits.insert(digits.begin(), 1);
    return digits;
  }
};

int main()
{
  vector<int> vec = {9};
  Solution obj;
  vector<int> sol = obj.plusOne(vec);

  for (int i = 0; i < sol.size(); i++)
  {
    cout << sol[i];
  }
  return 0;
}
