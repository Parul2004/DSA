#include <bits/stdc++.h>

using namespace std;
vector<int> sortArr(vector<int> &v)
{
    int l = 0, m = 0, h = v.size() - 1;
    while (m <= h)
    {
        if (v[m] == 0)
        {
            swap(v[l], v[m]);
            l++;
            m++;
        }
        else if (v[m] == 1)
        {
            m++;
        }
        else if (v[m] == 2)
        {
            swap(v[m],v[h]);
            h--;
        }
    }

    return v;
}
int main()
{
    vector<int> v = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    sortArr(v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}