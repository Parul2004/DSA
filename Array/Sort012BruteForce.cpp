#include<bits/stdc++.h>

using namespace std;
vector<int>sortArr(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i]>v[j]){
                int t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }
    return v;
}
int main(){
    vector<int>v = {0,1,1,0,1,2,1,2,0,0,0,1};
    /*
    Brute Force Approach is --> Merge Sort
    Time complexity --> N(logN)

    But here I am using Bubble Sort because I don't know about Merge Sort

    */
    sortArr(v);

    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}