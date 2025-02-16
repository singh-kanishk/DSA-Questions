#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    string s = "CXLIV";
    unordered_map<char, int> x;
    x['I'] = 1;
    x['V'] = 5;
    x['X'] = 10;
    x['L'] = 50;
    x['C'] = 100;
    x['D'] = 500;
    x['M'] = 1000;
    // s.at(0)<s.at(1)
    int a = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // if(i+1>s.length()){
        //     break;
        // }
         if (i < s.length() - 1 && x[s.at(i)] < x[s.at(i + 1)])
        {
            a -= x[s.at(i)];
        }
        else
        {
            a += x[s.at(i)];
        }
    }

cout<<a;
}