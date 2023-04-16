#include<bits/stdc++.h>
using namespace std;

 vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;

        for(auto i:nums) mp[i]++;
        for(int i = 1;i<=nums.size();i++){
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }

int main(){
    
    vector<int>v1 = {4,3,2,7,8,2,3,1};
    vector<int>p1 = findDisappearedNumbers(v1);
    for(auto i:p1) cout<<i<<" ";

    cout<<endl;

     vector<int>v2 = {1,1};
    vector<int>p2 = findDisappearedNumbers(v2);
    for(auto i:p2) cout<<i<<" ";

    return 0;
}