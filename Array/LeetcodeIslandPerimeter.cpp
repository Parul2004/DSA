#include <bits/stdc++.h>
using namespace std;

int countPerimeter = 0;

void dfs(vector<vector<int>> &grid, int i, int j)
{
    if (i < 0 || i >= grid.size() || grid[i][j] == 0 || j < 0 || j >= grid[i].size())
    {
        countPerimeter+=1;
        return;
    }

    if (grid[i][j] == -1)
        return;

    grid[i][j] = -1;

    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}
int CountIalandPerimeter(vector<vector<int>> &grid)
{

    int row = grid.size();
    int col = grid[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == 1)
            {
                dfs(grid, i, j);
                break;
            }
        }
    }
    return countPerimeter;
}


int main()
{
    vector<vector<int>> v1 = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};

    cout << CountIalandPerimeter(v1) << endl;
    return 0;
}