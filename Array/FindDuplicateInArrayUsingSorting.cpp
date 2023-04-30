#include<bits/stdc++.h>
using namespace std;
int sorting(vector<int>&v){
    int n = v.size();
    sort(v.begin(),v.end());
    for(int i = 0;i<n-1;i++){
        if(v[i] == v[i+1]) return v[i];
    }
    return -1;

}
int main(){
    // Time Complexity is O(NlogN + N)
    // Space Complexity is O(1)
    vector<int>v = {1,3,4,2,2};
    cout<<"The Duplicate Element is "<<sorting(v);
    return 0;
}