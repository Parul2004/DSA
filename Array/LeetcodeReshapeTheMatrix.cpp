#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &v, int r, int c)
{
    if (r * c != v.size() * v[0].size())
        ;
    vector<vector<int>> result(r, vector<int>(c, 0));

    for (int i = 0; i < r * c; i++)
        result[i / c][i % c] = v[i / v[0].size()][i % v[0].size()];

    return result;
}

int main()
{
    vector<vector<int>> v = {{1, 2}, {3, 4}};
    int r = 1, c = 4;
    vector<vector<int>>r = matrixReshape(v, r, c);
    for(auto i:r){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}