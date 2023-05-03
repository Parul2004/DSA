#include <bits/stdc++.h>
using namespace std;
bool findElement(vector<vector<int>> &v, int k)
{
    int n = v.size();
    int m = v[0].size();
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == k)
            {
                f = 1;
                return true;
            }
        }
    }
    if (f == 0)
        return false;
}
int main()
{
    vector<vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int k = 13;
    bool result = findElement(v, k);
    if (result == true)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}