#include <bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return max((nums[0] * nums[1] * nums[n - 1]), (nums[n - 1] * nums[n - 2] * nums[n - 3]));
}
int main()
{
    vector<int> v1 = {1, 2, 3};
    cout << maximumProduct(v1) << endl;
    vector<int> v2 = {1, 2, 3, 4};
    cout << maximumProduct(v2) << endl;
    vector<int> v3 = {-1, -2, -3};
    cout << maximumProduct(v3) << endl;
    return 0;
}