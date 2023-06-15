#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    vector<int> ans;

    int rows = matrix.size();
    int col = matrix[0].size();

    int total = rows * col;
    int srow = 0, erow = rows - 1;
    int scol = 0, ecol = col - 1;

    int count = 0;
    while (count < total)
    {
        for (int i = scol; i <= ecol && count < total; i++)
        {
            ans.push_back(matrix[srow][i]);
            count++;
        }
        srow++;

        for (int i = srow; i <= erow && count < total; i++)
        {
            ans.push_back(matrix[i][ecol]);
            count++;
        }
        ecol--;

        for (int i = ecol; i >= scol && count < total; i--)
        {
            ans.push_back(matrix[erow][i]);
            count++;
        }

        erow--;

        for (int i = erow; i >= srow && count < total; i--)
        {
            ans.push_back(matrix[i][scol]);
            count++;
        }
        scol++;
    }
    return ans;
}
int main()
{
    vector<vector<int>> v;

    for (int i = 0; i < 3; i++)
    {
        vector<int> arr;
        for (int j = 0; j < 3; j++)
        {
            int val;
            cin >> val;

            arr.push_back(val);
        }

        v.push_back(arr);
    }

    vector<int> ans = spiralOrder(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}