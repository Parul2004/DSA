#include <bits/stdc++.h>
using namespace std;

int atParticular(int row, int col)
{
    vector<vector<int>> v(row + 1);
    for (int i = 0; i < row + 1; i++)
    {
        v[i].resize(i + 1);
        v[i][0] = v[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }

    return v[row-1][col-1];
}
int main()
{

    int rows, cols;
    cout << "Enter row numeber : ";
    cin >> rows;
    cout << "\nEnter Col Number : ";
    cin >> cols;

    cout << "\n Element is " << atParticular(rows, cols) << endl;

    return 0;
}