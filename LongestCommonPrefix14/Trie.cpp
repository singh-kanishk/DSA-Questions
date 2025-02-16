#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
class Solution
{
  
  public:
  string longestCommonPrefix(vector<string> &arr)
  {
    unordered_map<char, int> counter;
    string a = arr[0];
    for (int i = 0; i < a.length(); i++)
    {
      char x = a.at(i);
      counter[x] = 1;
      
    }
    for (int i = 1, curr=1; i < arr.size(); i++)
    {
      string a=arr[i];
      for (int i = 0; i < a.length(); i++)
    {
      char x = a.at(i);
      if(counter[x]!=curr){
        break;
      }
      else{
        counter[x]++;
      }
      curr++;
      
    }
      }
     
  }
};
int main()

{
  Solution x;
  vector<string> sample = {"flower", "flow", "flight"};
  x.longestCommonPrefix(sample);

  return 0;
}