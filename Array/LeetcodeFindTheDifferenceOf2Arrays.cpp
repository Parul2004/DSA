#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> finddiff(vector<int> &v1, vector<int> &v2)
{
    unordered_set<int> set1(v1.begin(), v1.end()), set2(v2.begin(), v2.end());
    vector<int> ans1, ans2;

    for (int i : set1)
    {
        if (set2.count(i) == 0)
        {
            ans1.push_back(i);
        }
    }
    for (int i : set2)
    {
        if (set1.count(i) == 0)
        {
            ans2.push_back(i);
        }
    }

    return {ans1,ans2};
}
int main()
{
    vector<int> a = {1, 1, 2, 2, 3, 3};
    vector<int> b = {1, 2, 2};

    vector<vector<int>> ans = finddiff(a, b);

    for(auto i:ans){
        cout<<"{";
        for(auto j:i){
            cout<<j<<", ";
        }
        cout<<"}";
        cout<<endl;
    }
    return 0;
}