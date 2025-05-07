#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int x=nums[nums[i]];
            ans.push_back(x);
        }
        return ans;
    }
int main() {
    vector<int> vec={0,2,1,5,3,4};
    vector<int>ans= buildArray(vec);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}