#include<iostream>
#include<vector>

class Solution {
public:
    int searchInsert(std::vector<int> &nums, int target) {
        int a=0, b = nums.size();
        return Search(nums, a, b, target);
    }

    int Search(std::vector<int> &nums, int a, int b, int target) {
        while(a<b) {
            int n = (a+b) / 2;

            if (nums[n] == target) {
                return n;
            } else if (nums[n] > target) {
                b=n;
            } else {
                a=n+1;
            }
        }
            return a;

    }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Solution s;
    std::cout<<s.searchInsert(nums, 6);

    return 0;
}
