#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    
public:
    string convert(const string s, int numRows)
    {
        int n=s.length();
        string* answer=new string[s.length()*numRows];
        
        int countRows=0,
        countColumns=0;
        bool goingDown = true;
        string ans;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if(countColumns>=numRows){
                goingDown=false;
            }
            if (goingDown == true)
            {
                answer[countRows][countColumns+1]=s.at(i);
            }
            else{
                answer[countRows+1][countColumns-1]=s.at(i);
            }
            
        }
        
        
    }
};

int main()
{
    Solution obj;
    
    return 0;
}