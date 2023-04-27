#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> rotateArray90Degree(vector<vector<int>> &v)
{
    int n = v.size();
    vector<vector<int>> ans(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
           swap(v[i][j],v[j][i]);
        }
    }

    for(int i = 0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    return v;
}

int main(){
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