#include <bits/stdc++.h>
using namespace std;
int ans = 0;
void dfs(vector<vector<int>> v1, int i, int j)
{
    if (i < 0 || i >= v1.size() || j < 0 || j >= v1[i].size() || v1[i][j] == 0)
        return;

    if (v1[i][j] == 1)
        ans++;
    if (v1[i][j] == -1)
        return;
    v1[i][j] = -1;

    dfs(v1, i + 1, j);
    dfs(v1, i - 1, j);
    dfs(v1, i, j + 1);
    dfs(v1, i, j - 1);
}
int MaxAreaOfIsland(vector<vector<int>> v1)
{
    int maxi = 0;
    int rows = v1.size();
    int col = v1[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (v1[i][j])
            {
                dfs(v1, i, j);
                maxi = max(maxi, ans);
                ans = 0;
            }
        }
    }

    return ans;
}
int main()
{
    vector<vector<int>> v1 = {{0, 0, 0, 0, 0, 0, 0, 0}};

    cout<<MaxAreaOfIsland(v1);
    return 0;
}