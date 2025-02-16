#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
    vector<int> expectedNums;
public:
    void print() {
        cout << '[';
        for (int i = 0; i < expectedNums.size(); i++) {
            cout << expectedNums[i];
            if (i != expectedNums.size() - 1) {
                cout << ", ";
            }
        }
        cout << ']' << endl;
    }

    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // Number of elements other than `val`
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                expectedNums.push_back(nums[i]); // Keep only non-val elements
                k++;
            }
        }
        return k;
    }
};
// class Solution {
    
// public:
// vector<int> expectedNums;
//     void print(){
//         cout<<'[';
//         for(int i=0;i<expectedNums.size();i++){
//             cout<<" "<<expectedNums[i];
//         }
//         cout<<']';
//     }
//     int removeElement(vector<int>& nums, int val) {
        
//         int k=nums.size();
        
//         if(nums.empty()){
//             return -1;
//         }
    
//         for(int i=0;i<nums.size();i++){
//     if(nums[i]==val){
//          k--;
//     }
//     else{
//         expectedNums.push_back(nums[i]);
//     }   
//         }
//         sort(expectedNums.begin(),expectedNums.end());
//         return k;
//     }
// };
int main()
{
    vector<int> arr={0,1,2,2,3,0,4,2};
    Solution obj;
    cout<<obj.removeElement(arr,2);
    cout<<endl;
    obj.print();
    return 0;
}