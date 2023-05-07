#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &v)
{
    map<int, int> mpp;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
    }
    vector<int> ans;
    for (auto i : mpp)
    {
        if (i.second > n / 3)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}
void printVec(vector<int> ans)
{
    int n = ans.size();
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout<<endl;
}
int main()
{
    // Time Complexity - O(NlogN)
    // Space Complexity - O(N)
    vector<int> v1 = {1, 2, 2, 3, 2};
    vector<int> v2 = {11, 33, 33, 11, 33, 11};
    vector<int> ans1 = findMajority(v1);
    printVec(ans1);
    vector<int> ans2 = findMajority(v2);
    printVec(ans2);
    return 0;
}