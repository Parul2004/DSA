#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr, int target)
{
    map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        int a = arr[i];
        int b = target - a;

        if (mpp.find(b) != mpp.end())
        {
            return {mpp[b], i};
        }
        mpp[a] = i;
    }

    return {-1, -1};
}
int main()
{
    // Time Complexity - O(N)
    // Space Complexity - O(N)
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(arr, target);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}