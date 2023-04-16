#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &nums)
{
    int n = nums.size();
    int c = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            c++;
    }

    if (nums[n - 1] > nums[0])
        c++;

    if (c <= 1)
        return true;
    else
        return false;
}

int main()
{

    vector<int> v = {1, 2, 3};
    cout << check(v) << endl;
    vector<int> v1 = {2, 1, 3, 4};
    cout << check(v1) << endl;
    return 0;
}