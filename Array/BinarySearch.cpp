#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int k){
    int s = 0,e = n-1;

    while(s<e){
        int m = s+(e-s)/2;
        if(arr[m] == k) return m;
        else if(arr[m]>k) e = m-1;
        else s = m+1;
    }
    return -1;
}
int main(){
    // Time Complexity - O(logN)
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<BinarySearch(arr,10,8);
    return 0;
}