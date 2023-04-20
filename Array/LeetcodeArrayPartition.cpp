#include <bits/stdc++.h>
using namespace std;
int arrayPairSum(vector<int> &v)
{
    sort(v.begin(), v.end());

    int s = 0;

    for (int i = v.size() - 1; i >= 1; i -= 2)
    {
        s = s + min(v[i], v[i - 1]);
    }
    return s;
}
int main()
{
    vector<int> v = {6,2,6,5,1,2};
    cout << arrayPairSum(v) << endl;
    return 0;
}