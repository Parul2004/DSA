#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&arr,int target){
        for(int i = 0;i<arr.size();i++){
            for(int j = i+1;j<arr.size();j++){
                if(arr[i]+arr[j] == target) return {i,j};
            }
        }

        return {-1,-1};
}
int main(){
    vector<int>arr = {2,6,5,8,11};
    int target = 14;
    vector<int>ans = twoSum(arr,target);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}