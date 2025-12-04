#include <bits/stdc++.h>
using namespace std;
//   Solved myself but code was having edge problem during large code i was using switch 

class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int left = 0;
        int right = n - 1;

        
        while (left < n && directions[left] == 'L') {
            left++;
        }

       
        while (right >= 0 && directions[right] == 'R') {
            right--;
        }

        
        int collisions = 0;
        for (int i = left; i <= right; i++) {
            if (directions[i] != 'S') {
                collisions++;
            }
        }

        return collisions;
    }
};

int main()
{
    Solution sol;
    cout << sol.countCollisions("SSRSSRLLRSLLRSRSSRLRRRRLLRRLSSRR");
    return 0;
}