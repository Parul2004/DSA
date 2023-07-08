#include <bits/stdc++.h>
using namespace std;
void KadaneAlgo(int arr[], int n)
{
    int sum = 0, start = 0, ansStart = -1, ansEnd = -1, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        if (maxi < sum)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
            start = i + 1;
        }
    }

    cout << "From index " << ansStart << " to " << ansEnd << " maximum sum is " << sum << endl;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    KadaneAlgo(arr, n);
    return 0;
}