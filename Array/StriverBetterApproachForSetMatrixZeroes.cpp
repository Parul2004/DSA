#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrixZeroes(vector<vector<int>> &matrix, int n, int m)
{
    int rows[n] = {0};
    int cols[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
               rows[i] = 1;
               cols[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (rows[i] || cols[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
int main()
{
    vector<vector<int>> v = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    int n = v.size();
    int m = v[0].size();
    setMatrixZeroes(v, n, m);

    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}