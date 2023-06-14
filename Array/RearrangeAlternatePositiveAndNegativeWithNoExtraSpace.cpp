#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0, j = n-1;
    while(i<j){
        if(arr[i]>=0){
            i++;
            continue;
        }
        else if(arr[i]<0){
            int a = arr[i];
            arr[i] = arr[j];
            arr[j] = a;
            j--;
        }
    }

    int nIdx = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            nIdx = i;
            break;
        }
    }
     i = 0;
    while(nIdx<n){
        int a = arr[i];
        arr[i] = arr[nIdx];
        arr[nIdx] = a;
        nIdx+=1;
        i+=2;
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}