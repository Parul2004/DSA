#include <bits/stdc++.h>
using namespace std;
int findDup(vector<int> &v)
{
    int n = v.size();
    int freq[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        if (freq[v[i]] == 0)
        {
            freq[v[i]] += 1;
        }
        else{
            return v[i];
        }
    }
    return 0;
}
int main()
{
    // Time Complexity - O(n)
    // Space Complexity - O(n)
    
    vector<int> v = {1, 3, 5, 2, 2};
    cout<<"Duplicate Element is "<<findDup(v);
    return 0;
}