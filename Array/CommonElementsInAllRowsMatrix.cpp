#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>v;
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        vector<int>k;
        for(int j = 0;j<m;j++){
            int val;
            cin>>val;
            k.push_back(val);
        }

        v.push_back(k);
    }

    cout<<"Common Elements are : ";
    map<int,int>mpp;
    for(int i = 0;i<n;i++){
        set<int>s;
        for(int j = 0;j<m;j++){
            s.insert(v[i][j]);
        }

        for(auto i:s){
            mpp[i]++;
        }
        s.clear();
    }

    for(auto o:mpp){
        if(o.second>=n){
            cout<<o.first<<" ";
        }
    }
    return 0;
}