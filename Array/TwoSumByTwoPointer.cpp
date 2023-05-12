#include<bits/stdc++.h>
using namespace std;
vector<int>twoSum(vector<int>&arr,int target){
    sort(arr.begin(),arr.end());
    int l = 0,r = arr.size()-1;

    while(l<r){
        if(arr[l]+arr[r] == target) return {l,r};
        if(arr[l]+arr[r] < target) l++;
        else r--;
    }
    return {-1,-1};
}
int main(){
    // Time Complexity - O(N) + O(N*logN) Loop Runs N Times and Sorting will take O(N*logN)
    // Space Complexity - O(1)

    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(arr, target);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}