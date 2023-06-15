#include <bits/stdc++.h>
using namespace std;
/*

void rotateMatrix(int arr[][],int n,int m){
    for(int i = 0;i<n;i++){
        for(int j = m-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

*/
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // rotateMatrix(arr,n,m);

    // transpose a matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // swap 1st and last row

    for (int k = 0; k < n; k++)
    {
        int i = 0, j = m - 1;

        while (i < j)
        {
            swap(arr[k][i], arr[k][j]);
            i++;
            j--;
        }
    }


    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}