#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        vector<int> k;
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            k.push_back(val);
        }
        v.push_back(k);
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            ans.push_back(v[i][j]);
        }
    }

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i>j){
               if(v[i][j]<mini){
                mini = v[i][j];
               }
            }
            if(i>j){
               if(v[i][j]>maxi){
                maxi = v[i][j];
               }
            }
        }
    }

    cout<<"Maximum Difference is "<<maxi-mini<<endl;
    return 0;
}