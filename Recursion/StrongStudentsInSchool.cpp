#include <bits/stdc++.h>
using namespace std;
int diffSum(int n, int m, int arr[])
{
    // write your code here
    sort(arr, arr + n);

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < m; i++)
    {
        sum1 += arr[i];
    }
    cout << sum1 << endl;
    for (int i = n - 1; i >= n - m; i--)
    {
        sum2 += arr[i];
    }
    cout << sum2 << endl;
    return (sum2 - sum1);
}
int main()
{
    int arr[4] = {5, 8, 11, 40};
    //  5 8 11 15 40
    int res = diffSum(4, 4, arr);
    cout << res << endl;
    return 0;
}