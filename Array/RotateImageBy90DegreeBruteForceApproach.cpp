#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotateArray90Degree(vector<vector<int>> &v)
{
    int n = v.size();
    vector<vector<int>> ans(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n-i-1] = v[i][j];
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> ans = rotateArray90Degree(v);

    // Time Complexity - O(N*N)
    // Space Complexity - O(N*N)

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

void rotateArray90Degree(vector<vector<int>> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = v.size() - 1; j >= 0; j--)
        {
            cout << v[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateArray90Degree(v);
    return 0;
}


*/
