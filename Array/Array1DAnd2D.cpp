#include <bits/stdc++.h>
using namespace std;
int getLeftDiagonal(int arr[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int getLargest(int brr[])
{
    sort(brr,brr+3);
    return brr[2];
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int brr[3] = {3, 6, 9};
    int ans1 = getLeftDiagonal(arr);
    int ans2 = getLargest(brr);
    cout<<"{"<<ans1<<" "<<ans2<<"}";
    return 0;
}