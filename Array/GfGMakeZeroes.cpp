#include <bits/stdc++.h>
using namespace std;
void MakeZeros(vector<vector<int>> &matrix)
{
    // Code here
    int row = matrix.size();
    int col = matrix[0].size();
    stack<pair<int, int>> st;
    int r = -1, c = -1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                st.push({i, j});

                int sum = 0;
                if (i - 1 >= 0)
                {
                    sum += matrix[i - 1][j];
                }
                if (j - 1 >= 0)
                {
                    sum += matrix[i][j - 1];
                }
                if (i + 1 < row)
                {
                    sum += matrix[i + 1][j];
                }
                if (j + 1 < col)
                {
                    sum += matrix[i][j + 1];
                }

                matrix[i][j] = sum;
            }
        }
    }

    while (!st.empty())
    {
        int r = st.top().first;
        int c = st.top().second;
        st.pop();

        // for upper
        if (r - 1 >= 0)
        {
            matrix[r - 1][c] = 0;
        }
        if (c - 1 >= 0)
        {
            matrix[r][c - 1] = 0;
        }
        if (r + 1 < row)
        {
            matrix[r + 1][c] = 0;
        }
        if (c + 1 < col)
        {
            matrix[r][c + 1] = 0;
        }

    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 0, 7}, {8, 9, 4, 6}, {8, 4, 5, 2}};
    MakeZeros(arr);

    for (auto i : arr)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}