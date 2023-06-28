#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> fill(int n, int m, vector<vector<char>> &mat)
{
    vector<vector<char>> ans = mat;

    vector<vector<int>> vis(n, vector<int>(m, 0));
  
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || j == m - 1 || i == n - 1)
            {
                if (mat[i][j] == 'O')
                {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }
    }

    int delRow[4] = {-1, 0, +1, 0};
    int delCol[4] = {0, +1, 0, -1};

    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && mat[nrow][ncol] == 'O' && !vis[nrow][ncol])
            {
                q.push({nrow, ncol});
                vis[nrow][ncol] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 'O' && !vis[i][j])
            {
                ans[i][j] == 'X';
            }
        }
    }
    cout<<"Visited Array is : \n";
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vis[i][j] << " ";
        }
        cout << endl;
    }


    return ans;
}
int main()
{
    vector<vector<char>> mat = {{'X', 'X', 'X', 'X'},
                                {'X', 'O', 'X', 'X'},
                                {'X', 'O', 'O', 'X'},
                                {'X', 'O', 'X', 'X'},
                                {'X', 'X', 'O', 'O'}};
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<char>> ans = fill(n, m, mat);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}