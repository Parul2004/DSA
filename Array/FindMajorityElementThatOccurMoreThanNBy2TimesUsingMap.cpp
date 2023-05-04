#include<bits/stdc++.h>
using namespace std;
int findMajorityElement(vector<int>&v,int n){
  
    map<int,int>mpp;

    for(int i = 0;i<n;i++){
        mpp[v[i]]++;
    }
    for(auto i:mpp){
        if(i.second>floor(n/2)){
            return i.first;
        }
    }
    return -1;
}
int main(){
    /*
   Time Complexity - O(N*LogN)+O(N)
   Space Complexity - O(1)
   */
    vector<int> v = {4, 4, 2, 4, 3, 4, 4, 3, 2, 4};
    int n = v.size();
    int j = findMajorityElement(v, n);
    cout << j << endl;
    return 0;
}