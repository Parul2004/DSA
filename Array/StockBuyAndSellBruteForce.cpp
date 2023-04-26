#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int> &v1)
{

    int n = v1.size(), maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v1[j] > v1[i])
            {
                maxi = max(maxi, (v1[j] - v1[i]));
            }
        }
    }
    return maxi;
}
int main()
{
    vector<int> v1 = {7, 1, 5, 3, 6, 4};
    vector<int> v2 = {7, 6, 4, 3, 1};

    int r1 = findMax(v1);
    cout << r1 << endl;
    /*
    Time Complexity - O(N^2)
    Space Complexity - O(1)
    */
    int r2 = findMax(v2);
    cout << r2 << endl;

    return 0;
}