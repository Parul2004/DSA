#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    int a, c = -1;
    for (auto i : mp)
    {
        if (i.second > c)
        {
            c = i.second;
            a = i.first;
        }
    }
    return a;
}
int main()
{
    vector<int> v = {2, 2, 1, 1, 2, 2};
    cout<<majorityElement(v)<<endl;
    return 0;
}