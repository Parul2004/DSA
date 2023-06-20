#include<bits/stdc++.h>
using namespace std;
int findMinOps(int arr[],int n){
    int ans = 0;
    int i = 0,j = n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else if(arr[i]>arr[j]){
            j--;
            arr[j]+=arr[j+1];
            ans++;
        }
        else if(arr[i]<arr[j]){
             i++;
             arr[i]+=arr[i-1];
             ans++;
        }
    }

    return ans;
}
int main(){
    int arr[4] = {1,4,5,1};
    cout<<findMinOps(arr,4);
    return 0;
}