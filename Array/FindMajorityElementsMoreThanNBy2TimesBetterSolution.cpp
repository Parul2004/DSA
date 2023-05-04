#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(vector<int> &v, int n)
{
    sort(v.begin(), v.end());
    int c = 0, maxi = 0, ele = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            c++;
            if (maxi < c)
            {
                maxi = c;
                ele = v[i];
            }
        }
        else
        {

            c = 0;
        }
    }
    if (ele == v[n - 1])
        c++;
    int m = floor(n / 2);
    if (c > m)
        return ele;
    else
        return -1;
}
int main()
{
    /*
    Time Complexity - O(N.loh(N)) + O(N)
    Space Complexity - O(1)
    */
    vector<int> v = {4,4,2,4,3,4,4,3,2,4};
    int n = v.size();
    int j = findMajorityElement(v, n);
    cout << j << endl;
    return 0;
}