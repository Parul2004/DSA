#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &v)
{

    int idx1 = -1;
    int n = v.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            idx1 = i;
            break;
        }
    }

    if (idx1 == -1)
    {
        reverse(v.begin(), v.end());
        return v;
    }

    // Step 2 : Find the next greater element
    // and swap it with v[dex1]

    for (int i = n - 1; i > idx1; i--)
    {
        if (v[i] > v[idx1])
        {
            swap(v[i], v[idx1]);
            break;
        }
    }

    reverse(v.begin() + idx1 + 1, v.end());

    return v;
}
int main()
{
    vector<int> v = {2, 1, 5, 4, 3, 0, 0};

    vector<int> ans = nextPermutation(v);

    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}