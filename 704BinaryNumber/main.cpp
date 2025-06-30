
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0,b=nums.size()-1;
        while(a<=b){
           
            
            if(nums.at((a+b)/2)==target){
                return (a+b)/2;
            }
            else if(nums.at((a+b)/2)>target){
                b=((a+b)/2)-1;
            }
            else{
                a=((a+b)/2)+1;
            }
        }
        
        return -1;
    }
};





/*************************************************
 * C++ VS Code Boilerplate
 * Author: <Your Name>
 * ----------------------------------------------
 * Section 1: LeetCode template
 * Usage: Replace `exampleFunction` with your method
 * and add your own tests in main when building locally.
 *
 * Section 2: Minimal Hello World
 *************************************************/

/*------------------ LeetCode Template ------------------*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Example function signature; replace with problem‑specific one
    int exampleFunction(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0);
    }
};

#ifdef LOCAL_TEST
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1, 2, 3, 4};
    Solution sol;
    cout << sol.exampleFunction(nums) << '\n';
    return 0;
}
#endif

/*------------------ Hello World ------------------*/
// Uncomment this block to build the simplest program.
// #include <iostream>
// int main() {
//     std::cout << "Hello, World!" << '\n';
//     return 0;
// }