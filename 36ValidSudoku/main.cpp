#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<bool> arrayForCheck = vector<bool>(9, false); // no static

    bool insertVal(char val)
    {
        if (val == '.')
            return true;

        if (arrayForCheck.at(val - '1'))
            return false;

        arrayForCheck[val - '1'] = true;
        return true;
    }

    bool checkVer(vector<vector<char>> &board, int horIndex)
    {
        for (int i = 0; i < 9; i++)
        {
            if (!insertVal(board[horIndex][i]))
                return false;
        }
        fill(arrayForCheck.begin(), arrayForCheck.end(), false);
        return true;
    }

    bool checkHor(vector<vector<char>> &board, int verIndex)
    {
        for (int i = 0; i < 9; i++)
        {
            if (!insertVal(board[i][verIndex]))
                return false;
        }
        fill(arrayForCheck.begin(), arrayForCheck.end(), false);
        return true;
    }

    bool checkBlock(vector<vector<char>> &board, int x, int y)
    {
        for (int i = x; i < x + 3; i++)
        {
            for (int j = y; j < y + 3; j++)
            {
                if (!insertVal(board[i][j]))
                    return false;
            }
        }
        fill(arrayForCheck.begin(), arrayForCheck.end(), false);
        return true;
    }

public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            if (!checkVer(board, i) || !checkHor(board, i))
                return false;
        }

        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                if (!checkBlock(board, i, j))
                    return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution sol;

    return 0;
}