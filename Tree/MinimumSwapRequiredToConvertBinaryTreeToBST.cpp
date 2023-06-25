#include<bits/stdc++.h>
using namespace std;
void inorder(vector<int>&v,vector<int>&nums,int index,int n){
    if(index>=n) return;
    inorder(v,nums,2*index+1,n);
    nums.push_back(v[index]);
    inorder(v,nums,2*index+2,n);
}
int swapsCount(vector<int>&nums,int n){
    vector<pair<int,int>>ans(n);
    for(int i = 0;i<n;i++){
       ans[i] = {nums[i],i};
    }
    sort(ans.begin(),ans.end());

    int count = 0;
    for(int i = 0;i<n;i++){
        if(ans[i].second == i) continue;
        else{
            swap(ans[i],ans[ans[i].second]);
            count++;
            i--;
        }
    }
    return count;
}
int main(){
    vector<int> v = {5,6,7,8,9,10,11};
    // for doing this 2 things we have to do
    // find inOrder traversal
    // count number of swaps

    vector<int>nums;
    int index = 0,n = v.size();
    inorder(v,nums,index,n);
    cout<<swapsCount(nums,n);
    return 0;
}