#include <bits/stdc++.h>

using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{

    sort(g.rbegin(), g.rend());
    sort(s.rbegin(), s.rend());

    int n = g.size();
    int m = s.size();
    int curr = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        if (curr < m && g[i] <= s[curr])
        {
            total++;
            curr++;
        }
    }

    return total++;
}

int main()
{

    vector<int> g1 = {1, 2, 3};
    vector<int> s1 = {1, 1};

    cout << findContentChildren(g1, s1) << endl;

    vector<int> g2 = {1, 2};
    vector<int> s2 = {1, 2,3};

    cout << findContentChildren(g2, s2) << endl;

    return 0;
}