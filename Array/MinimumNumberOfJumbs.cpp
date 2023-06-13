#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n){
        // Your code here
        int c = 0;
        int s = arr[0];
        if(s==0) return -1;
        int i = s, j = 0;
        while(i+j<n){
            int d = i+j;
            int idx = arr[d];
            j = d;
            i = idx;
          
            c++;
            cout<<"Value of c is "<<c<<endl;
           
        }
        if(i+j<n){
            return -1;
        }
        return c;
    }
int main(){
    int arr[11] = {1,3,5,8,9,2,6,7,6,8,9};
    // int arr[6] = {1,4,3,2,6,7};
    cout<<minJumps(arr,11);
    return 0;
}