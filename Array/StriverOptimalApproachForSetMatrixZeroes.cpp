#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrixZeroes(vector<vector<int>> &matrix, int n, int m)
{
    int col0 = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;

                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    // Step 2 : Mark with 0 from (1,1) to (n-1,m-1);

    for(int i = 1;i<n;i++){
        for(int j = 1;j<m;j++){
            if(matrix[i][j] != 0){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    // Step 3 : Finally mark the 1st col and 1st row

    if(matrix[0][0] == 0){
        for(int j = 0;j<m;j++){
            matrix[0][j] = 0;
        }
    }

    if(col0 == 0){
        for(int i = 0;i<n;i++){
            matrix[i][0] = 0;
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