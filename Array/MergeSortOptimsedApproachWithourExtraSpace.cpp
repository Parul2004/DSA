#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int gap = ceil(float(n + m) / 2);

    while (gap > 0)
    {
        int i = 0;
        int j = gap;

        while (j < (n + m))
        {
            if (j < n && i < n && arr1[i] > arr2[i])
            {
                swap(arr1[i], arr1[j]);
            }
            else if (j >= n && i < n && arr1[i] > arr2[j - n])
            {
                swap(arr1[i], arr2[j - n]);
            }
            else if (j >= n && i >= n && arr2[i - n] > arr2[j - n])
            {
                swap(arr2[i-n],arr2[j-n]);
            }
            i++;
            j++;
        }
        if(gap == 1) gap =0;
        else{
            gap = ceil(float(gap)/2);
        }
    }
}
int main()
{
    // Time Complexity is O(n*m);
    // Space Complexity is O(1)
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};
    cout << "Before merge:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int j = 0; j < 3; j++)
    {
        cout << arr2[j] << " ";
    }

    cout << endl;
    merge(arr1, arr2, 5, 3);
    cout << "After merge:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int j = 0; j < 3; j++)
    {
        cout << arr2[j] << " ";
    }

    return 0;
}