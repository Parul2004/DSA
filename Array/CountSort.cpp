#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of the Array : ";
    int n;
    cin >> n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    cout << "MAximum element In this Array is : " << max1 << endl;
    int ansArr[max1 + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        ansArr[arr[i]]++;
    }
    cout << "Sorted Array is : ";
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (ansArr[i] > 0)
        {
           arr[idx++] = ansArr[i];
           ansArr[i] = ansArr[i]-1;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}