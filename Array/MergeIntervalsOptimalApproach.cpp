#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> merge(vector<vector<int>> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;

    if(n == 0) return ans;
    sort(arr.begin(),arr.end());
    vector<int>temp = arr[0];

    for(auto it:arr){
        if(it[0]<=temp[1]){
            temp[1] = max(it[1],temp[1]);
        }
        else{
            ans.push_back(temp);
            temp = it;
        }
    }
    ans.push_back(temp);
    return ans;
}
int main()
{
    // Time Comlexity - O(NlogN)+O(N)
    // Space Complexity - O(N);
    vector<vector<int>> arr;
    arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector<vector<int>> ans = merge(arr);

    cout << "Merge Overlapping Intervals are " << endl;
    for (auto it : ans)
    {
        cout << it[0] << " " << it[1] << "\n";
    }
    return 0;
}