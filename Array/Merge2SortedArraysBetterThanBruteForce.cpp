#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m){
    int i,k;
    for( i = 0;i<n;i++){
         if(arr1[i]>arr2[0]){
            int tmp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = tmp;
         }

         // sort arr2 
         int first = arr2[0];
         for(k = 1;k<m && arr2[k]<first;k++){
            arr2[k-1] = arr2[k];
         }
         arr2[k-1] = first; 
    }
}
int main(){
    // Time Complexity is O(n*m);
    // Space Complexity is O(1)
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