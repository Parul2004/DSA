#include<bits/stdc++.h>
using namespace std;
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int p=1;
        for(int i = 0;i<nums.size();i++){
            p*=nums[i];
            maxi = max(maxi,p);
            // if(p<0) p = 1;
        }
    return maxi;
        
    }
int main(){
    vector<int>v = {-3,-1,-1};
    cout<<maxProduct(v);
    return 0;
}