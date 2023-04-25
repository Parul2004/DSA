#include <bits/stdc++.h>

using namespace std;

vector<int> sortArr(vector<int> &v)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            cnt0++;
       else if (v[i] == 1)
            cnt1++;
       else if (v[i] == 2)
            cnt2++;
    }

    for (int i = 0; i < cnt0; i++)
        v[i] = 0;
    for (int i = cnt0; i < cnt0+cnt1; i++)
        v[i] = 1;
    for (int i = cnt0+cnt1; i < v.size(); i++)
        v[i] = 2;

    return v;
}
int main()
{
    vector<int> v = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    /*
    Time Complexity - O(2N)
    Space Complexity - O(1)
    */

    sortArr(v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}