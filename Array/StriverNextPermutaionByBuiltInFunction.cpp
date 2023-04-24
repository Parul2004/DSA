#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,1,3};
    
    next_permutation(arr,arr+3);

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    return 0;
}