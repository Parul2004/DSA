#include <bits/stdc++.h>
using namespace std;
int kthSmallestElement(int arr[], int k,int n)
{
    priority_queue<int> maxQueue;
    for(int i = 0;i<n;i++){
        maxQueue.push(arr[i]);
    }
    int i = 1;
    while(i<k){
        maxQueue.pop();
        i++;
    }
    return maxQueue.top();
}
int main()
{
    int arr[5] = {7, 10, 3, 20, 0};
    int k = 3, n = 5;
    cout << kthSmallestElement(arr,k,n) << endl;
    return 0;
}