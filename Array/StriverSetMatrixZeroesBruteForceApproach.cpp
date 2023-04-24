#include <bits/stdc++.h>
using namespace std;
void rowMatrix(vector<vector<int>> &matrix, int i, int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
void colMatrix(vector<vector<int>> &matrix, int j, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
vector<vector<int>> setMatrixZeroes(vector<vector<int>> &matrix, int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowMatrix(matrix, i, n, m);

                colMatrix(matrix, j, n, m);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
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