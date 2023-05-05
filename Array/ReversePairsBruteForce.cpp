#include <bits/stdc++.h>
using namespace std;
int findPairs(vector<int> &v)
{
    int n = v.size();
    int pair = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > 2 * v[j])
            {
                pair++;
            }
        }
    }
    return pair;
}
int main()
{
    
    // Time Complexity - O(N^2)
    // Space Complexity - O(1)

    vector<int> v = {1, 3, 2, 3, 1};
    cout<<"Reverse Pairs are : "<<findPairs(v);
    return 0;
}