#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m){
    int arr3[n+m];
    int k = 0;
    for(int i = 0;i<n;i++){
        arr3[k++] = arr1[i];
    }
    for(int j = 0;j<m;j++){
        arr3[k++] = arr2[j];
    }

    sort(arr3,arr3+n+m);
    k = 0;
    for(int i = 0;i<n;i++){
        arr1[i] = arr3[k++];
    }

    for(int j = 0;j<m;j++){
        arr2[j] = arr3[k++];
    }

    
}
int main(){
    // Time Complexity is O(n*log(n) + O(n) +O(n));
    // Space Complexity is O(n+m)
    int arr1[] = {1,4,7,8,10};
    int arr2[] = {2,3,9};
    cout<<"Before merge:"<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    for(int j = 0;j<3;j++){
        cout<<arr2[j]<<" ";
    }

    cout<<endl;
    merge(arr1,arr2,5,3);
    cout<<"After merge:"<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    for(int j = 0;j<3;j++){
        cout<<arr2[j]<<" ";
    }
    return 0;
}