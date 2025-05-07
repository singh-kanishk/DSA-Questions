#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    int check(int value){
    if(value<0){
        return -value;
    }
    return value;
    }
public:
    int scoreOfString(string s) {
        int k;
        int value=0;
        for(int i=0;i<s.size()-1;i++){
            k=s.at(i)-s.at(i+1);
            value+=check(k);
        }
       
        return value;
    }
};
int main() {
    Solution obj;
    cout<<obj.scoreOfString("hello");
    return 0;
}