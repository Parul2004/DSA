#include <bits/stdc++.h>

using namespace std;
vector<int> find_missing_repeating(vector<int> &v)
{
    long long int len = v.size();

    long long int S = (len * (len + 1)) / 2;
    long long int P = (len * (len + 1) * (2 * len + 1)) / 6;

    long long int kiss_number = 0, repeating = 0;

    for (int i = 0; i < v.size(); i++)
    {
        S -= (long long int)v[i];
        P -= (long long int)v[i] * (long long int)v[i];
    }

    kiss_number = (S + (P / S)) / 2;
    repeating = kiss_number - S;
    vector<int> v;
    v.push_back(kiss_number);
    v.push_back(repeating);

    return;
}
int main()
{
    // Time complexity - O(n)
    // Space Complexity - O(1)

    vector<int> v = {3, 1, 2, 5, 3};
    vector<int> u = find_missing_repeating(v);
    for (auto i : u)
    {
        cout << i << " ";
    }
    return 0;
}