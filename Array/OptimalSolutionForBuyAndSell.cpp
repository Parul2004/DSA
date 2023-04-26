#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int> &v)
{
    int buyPrice = INT_MAX;
    int sellPrice = 0;

    for (int i = 0; i < v.size(); i++)
    {
        buyPrice = min(buyPrice, v[i]);
        sellPrice = max(sellPrice, v[i] - buyPrice);
    }
    return sellPrice;
}
int main()
{
    vector<int> v1 = {7, 1, 5, 3, 6, 4};
    vector<int> v2 = {7, 6, 4, 3, 1};

    int r1 = findMax(v1);
    cout << r1 << endl;
    /*
    Time Complexity - O(N)
    Space Complexity - O(1)
    */
    int r2 = findMax(v2);
    cout << r2 << endl;

    return 0;
}