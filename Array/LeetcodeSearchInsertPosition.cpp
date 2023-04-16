#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &v, int n)
{
    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (v[m] == n)
            return m;

        if (v[m] < n)
            s = m + 1;
        else
            e = m - 1;
    }
    return -1;
}
int main()
{

    vector<int> v;
    v.push_back(11);
    v.push_back(3);
    v.push_back(31);
    v.push_back(2);
    v.push_back(7);

    cout << BinarySearch(v, 31) << endl;
    return 0;
}