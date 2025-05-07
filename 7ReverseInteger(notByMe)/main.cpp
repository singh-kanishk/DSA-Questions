#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int reverse(int x)
{
  int n, reversed_number = 0, remainder;

  while (x != 0)
  {
    remainder = x % 10;
    reversed_number = reversed_number * 10 + remainder;
    x /= 10;
  }
  return reversed_number;
}

int main()
{
  cout << reverse(513);
  return 0;
}