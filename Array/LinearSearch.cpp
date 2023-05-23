#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int k,int n){
    // int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        if(k==arr[i]) return i;
    }
    return -1;
}
int main(){
    // Time Complexity is - O(n) in worst case
    int arr[10] = {3,2,1,456,75,12,98,21,6,23};
    cout<<LinearSearch(arr,56,10)<<endl;
    return 0;
}