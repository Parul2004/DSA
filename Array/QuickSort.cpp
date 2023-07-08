#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{

    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
            i++;
        while (arr[j] > pivot && j > low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}
int main()
{
    int arr[] = {4, 6, 3, 11, 0, 2};
    quickSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}