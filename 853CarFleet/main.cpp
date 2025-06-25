#include <bits/stdc++.h>
using namespace std;
template <typename T1, typename T2>
void syncSort(vector<T1> &arr1, vector<T2> &arr2)
{
    int n = arr1.size();

    vector<int> indices(n);
    for (int i = 0; i < n; ++i)
        indices[i] = i;

    sort(indices.begin(), indices.end(), [&](int i, int j)
         { return arr1[i] < arr1[j]; });

    vector<T1> sortedArr1(n);
    vector<T2> sortedArr2(n);
    for (int i = 0; i < n; ++i)
    {
        sortedArr1[i] = arr1[indices[i]];
        sortedArr2[i] = arr2[indices[i]];
    }

    arr1 = move(sortedArr1);
    arr2 = move(sortedArr2);
    cout << "\n\nSync Sort (First Position Synced and then copied Speed Value)";
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << '\n'
             << arr1.at(i) << ' ' << arr2.at(i);
    }
}
stack<float> insertTime(vector<int> &position, vector<int> &speed, int target)
{
    stack<float> st;
    cout << "\n\nInserting time smallest index first ";
    for (int i = 0; i <= position.size() - 1; i++)
    {

        st.push((float)(target - position.at(i)) / speed.at(i));
        cout << "\n"
             << st.top();
    }
    return st;
}
class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        int ans = 0;
        float prevTime = -1;
        syncSort<int, int>(position, speed);

        stack<float> st = insertTime(position, speed, target);

        if (st.empty())
        {
            return 0;
        }
        cout << "\n\nMain Func ";
        for (int i = 0; i < position.size(); i++)
        {

            if (st.top() > prevTime)
            {
                ans++;
                prevTime = st.top();
            }

            cout <<"\nPrevTime-> "<<prevTime<<" st.top->"<<st.top()<< ", ans->"
                 << ans;
            st.pop();
        }
        cout << "\n\nFinal Ans\n";
        return ans;
    }
};

int main()
{
    vector<int> pos = {8, 12, 16, 11, 7}, spe = {6, 9, 10, 9, 7};
    Solution sol;
    cout << sol.carFleet(17, pos, spe);

    return 0;
}