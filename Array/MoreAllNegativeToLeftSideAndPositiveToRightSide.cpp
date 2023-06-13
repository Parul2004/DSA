#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }

    int arr[10] = {3, 2, 65, -3, -12, 0, 5, -76, 98, 23};
    int j = 0;
    for(int i = 0;i<10;i++){
        
        if(arr[i]<0){
             if(i!=j){
                swap(arr[i],arr[j]);
             }
             j++;
        }
    }

    for(int i = 0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}