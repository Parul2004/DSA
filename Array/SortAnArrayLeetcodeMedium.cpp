#include<bits/stdc++.h>
using namespace std;
 int removeDuplicates(vector<int>& nums) {

        vector<int>v;
        for(int i = 0;i<nums.size();i++){
            if(count(v.begin(),v.end(),nums[i])<2){
                v.push_back(nums[i]);
            }
            else continue;
        }
        
        nums = v;
        return v.size();
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Number of Elements in Vector left : "<<removeDuplicates(arr);
    return 0;
}