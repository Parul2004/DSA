#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &v)
{
    int n = v.size();
    int cnt = 0, ele = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            ele = v[i];
        }
        else if (ele == v[i])
            cnt++;
        else
            cnt--;
    }
    int ansCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ele == v[i])
        {
            ansCnt++;
            if (ansCnt > n / 2)
            {
                return ele;
            }
        }
    }
    return -1;
}
int main()
{
    /*
    Time Complexity is - O(N)+O(N)
    Space Complexity - O(1)
    */
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(v);
    cout << "The majority element is : " << ans << endl;
    return 0;
}