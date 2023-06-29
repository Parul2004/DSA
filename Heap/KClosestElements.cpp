#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5};
    int k = 4,x = 3;

    priority_queue<pair<int,int>>maxHeap;

    for(int i = 0;i<arr.size();i++){
        maxHeap.push({abs(arr[i]-x),arr[i]});
        if(maxHeap.size()>k) maxHeap.pop();
    }

    vector<int>ans;
    while(!maxHeap.empty()){
        ans.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    sort(ans.begin(),ans.end());
    
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}