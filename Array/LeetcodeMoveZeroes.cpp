#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> v)
{
    int z = 0;
    vector<int> nums;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            nums.push_back(v[i]);
        }
        else
        {
            z++;
        }
    }
    while (z != 0)
    {
        nums.push_back(0);
        z -= 1;
    }
    cout << "After moving Zeroes at The end : ";
    for (auto i : nums)
    {
        cout << i << " ";
    }
}
int main()
{

    vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);

    moveZeroes(v);

    return 0;
}