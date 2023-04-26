#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> printTriangle(int noOfRows)
{
    vector<vector<int>> v(noOfRows);

    for (int i = 0; i < noOfRows; i++)
    {
        v[i].resize(i + 1);
        v[i][0] = v[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }

    return v;
}
int main()
{
    int noOfRows;
    cin >> noOfRows;

   vector<vector<int>> v =  printTriangle(noOfRows);
   for(auto i:v){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
   }


    return 0;
}