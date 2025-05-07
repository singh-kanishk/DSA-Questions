#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> result;
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        
        generateCombinations(0, digits, mapping, "", result);
        return result;
    }

private:
    void generateCombinations(int index, const string &digits, const vector<string> &mapping,
                               string current, vector<string> &result) {
        if (index == digits.size()) { 
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0']; 
        for (char letter : letters) { 
            generateCombinations(index + 1, digits, mapping, current + letter, result);
        }
    }
};

int main() {
    Solution sol;
    string digits = "23";
    vector<string> combinations = sol.letterCombinations(digits);

    cout << "Combinations: ";
    for (const string &combo : combinations) {
        cout << combo << " ";
    }
    cout << endl;

    return 0;
}
