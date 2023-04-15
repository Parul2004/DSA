#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int s = 0;

        for(int i = 0;i<nums.size();i++){
            s+=nums[i];
        }

        return sum-s;
    }
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(0);
    v.push_back(1);
    int ans = missingNumber(v);
    cout<<ans<<endl;
    return 0;
}