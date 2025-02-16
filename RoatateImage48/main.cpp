#include <iostream>
#include <vector>

using namespace std;


    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> vec;
        for(int i=0;i<matrix.size();i++){
            for (int j = 0; j < matrix.size(); j++)
            {
                matrix[i][j]=vec[j][i];
            }
            
        }
    matrix=vec;
    }

int main() {
    return 0;
}