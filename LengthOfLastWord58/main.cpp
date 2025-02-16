#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0;
        for(int i=s.length()-1;i>=0;i--){
            if(k==0&&s[i]==' '){
                continue;
            }
            else if(s[i]==' '&&k!=0){
                break;
            }
            else if(s[i]!=' '){
                k++;
            }
            else{
                return -1;
            }
            
        }    return k;    
    }
};
int main()
{
    Solution obj;
    cout<<obj.lengthOfLastWord( "a");

    return 0;
}