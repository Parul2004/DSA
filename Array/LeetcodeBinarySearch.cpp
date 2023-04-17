#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr,int target){
    int s = 0,e = arr.size()-1;

    while (s<=e)
    {
        int m = s+(e-s)/2;

        if(arr[m] == target) return m;

        if(arr[m]<target) s = m+1;
        else e = m-1;
    }

    return -1;
    
}
int main(){
    vector<int>v = {2,4,5,7,10,20};
    int target = 5;
    cout<<binarySearch(v,target);
    return 0;
}