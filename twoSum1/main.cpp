// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
    // vector<int> twoSum(vector<int> &nums, int target)
    // {
        // int i;
// 
        // vector<int> ans;
        // unordered_map<int, int> map;
// 
        // for (int i = 0; i < nums.size(); i++)
        // {
            // map[nums[i]] = i;
            // if(i==0){
                // continue;
            // }
            // int numToFind = target - nums[i];
            // auto it =map.find(numToFind);
            // if (it!=map.end())
            // {
                // ans.push_back(map[numToFind]);
                // ans.push_back(map[i]);
            // }
        // }
// 
        // return ans;
    // }
// };
// int main()
// {
    // vector<int> v = {2, 7, 11, 15};
// 
    // unordered_map<int, int> x;
    // x[10] = 1;
    // x[20] = 19;
    // cout << x.at(0) << endl;
    // Solution obj;
    // vector<int> vec = obj.twoSum(v, 9);
    // for (int i = 0; i < vec.size(); i++)
    // {
        // cout << vec[i] << " ";
    // }
// 
    // return 0;
// }
// 
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans; 
        unordered_map<int, int> map; 
        for (int i = 0; i < nums.size(); i++)
        {
            int numToFind = target - nums[i];

            
            auto it = map.find(numToFind);
            if (it != map.end())
            {
                
                ans.push_back(it->second); 
                ans.push_back(i);          
                return ans;                
            }
            
            
            map[nums[i]] = i;
        }

        return ans;
    }
};

int main()
{
    vector<int> v = {2, 5, 7, 15};
    Solution obj;
    vector<int> vec = obj.twoSum(v, 9);
    
    // Output the result
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
