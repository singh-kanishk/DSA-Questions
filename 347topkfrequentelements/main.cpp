#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            while (k>0){
                for(int num: nums){
                    if(nums[num]!=nums[num+1]){
                        k--;
                    }
                }
            }
        }
    };

int main() {
    Solution sol;


    return 0;
}
/* 
int array[]={1,2,3,4,5,6} (2)


*/