#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
using namespace std;
 bool isPalindrome(int x) {
       
  int n, reversed_number = 0, remainder;
int temp=x;
  while (x != 0)
  {
    remainder = x % 10;
    reversed_number = reversed_number * 10 + remainder;
    x /= 10;
  }
  if(temp>=0){
 return reversed_number==temp;
    }
    else{
        return false;
    }
    }
int main() {
cout<<isPalindrome(121);
    return 0;
}