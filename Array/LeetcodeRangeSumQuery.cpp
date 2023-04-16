#include<bits/stdc++.h>
using namespace std;

int SumRange(vector<int>nums,int left,int right){
    int sum = 0;

    for(int i = left;i<=right;i++){
        sum+=nums[i];
    }

    return sum;
}
int main(){
    
    vector<int> nums;
    nums.push_back(-2);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(-5);
    nums.push_back(2);
    nums.push_back(-1);

    cout<<SumRange(nums,0,2)<<" ";
    cout<<SumRange(nums,2,5)<<" ";
    cout<<SumRange(nums,0,5)<<" ";
    return 0;
}