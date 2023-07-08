#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    // code here
    int countPos = 0, countNeg = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            countPos++;
        else
            countNeg++;
    }

    int posArr[countPos], negArr[countNeg];
    int idx1 = 0, idx2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            posArr[idx1++] = arr[i];
        else
            negArr[idx2++] = arr[i];
    }
    /* cout << "\nPosArr is : \n";
     for (int i = 0; i < idx1; i++)
     {
         cout << posArr[i] << " ";
     }
 */
    /*
     cout << "\nNegArr is : \n";
     for (int i = 0; i < idx2; i++)
     {
         cout << negArr[i] << " ";
     }

     */
    int mini = min(idx1, idx2);
    int idx3 = 0;
    for (int i = 0; i < mini; i++)
    {
        arr[idx3++] = posArr[i];
        arr[idx3++] = negArr[i];
    }

    /*
    cout << "\nArr is : \n";
    for (int i = 0; i < idx3; i++)
    {
        cout << arr[i] << " ";
    }
    */
    while (mini < idx1)
    {
        arr[idx3++] = posArr[mini++];
    }

    while (mini < idx2)
    {
        arr[idx3++] = negArr[mini++];
    }
}
int main()
{
    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}