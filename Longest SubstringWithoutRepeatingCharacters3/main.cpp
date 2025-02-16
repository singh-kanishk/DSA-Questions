#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
class Solution{
    public:
int lengthOfLongestSubstring(const string& s) {
    int maxLength = 0;
    int left = 0;
    unordered_set<char> charSet;

    for (int right = 0; right < s.size(); ++right) {
        
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            ++left;
        }
        charSet.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}};

int main() {
    Solution obj;
    cout << "Length of longest substring without repeating characters: "
         << obj.lengthOfLongestSubstring("Hello") << endl;
    return 0;
}

