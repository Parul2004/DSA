#include <bits/stdc++.h>

using namespace std;

vector<int> find_missing_repeating(vector<int> &v)
{
    int n = v.size() + 1;
    vector<int> substitute(n, 0);
    vector<int> ans;

    for (int i = 0; i < v.size(); i++)
    {
        substitute[v[i]]++;
    }
    for (int i = 1; i <= v.size(); i++)
    {
        if (substitute[i] == 0 || substitute[i] > 1)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    // Time complexity - O(n)
    // Space Complexity - O(n)

    vector<int> v = {3, 1, 2, 5, 3};
    vector<int> u = find_missing_repeating(v);
    for (auto i : u)
    {
        cout << i << " ";
    }
    return 0;
}