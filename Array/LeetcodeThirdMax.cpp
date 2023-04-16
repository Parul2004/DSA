#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int> &nums)
{

    set<int> s;
    for (int i = 0; i < nums.size(); i++)
        s.insert(nums[i]);
    nums.clear();
    for (auto i : s)
        nums.push_back(i);
    int a;
    if (nums.size() < 3)
    {
        a = nums[nums.size() - 1];
    }
    else
    {
        a = nums[nums.size() - 3];
    }

    return a;
}

int main()
{

    vector<int> nums1 = {1, 2};
    cout << thirdMax(nums1) << endl;
    vector<int> nums2 = {3, 2, 1};
    cout << thirdMax(nums2) << endl;
    vector<int> nums3 = {2, 2, 3, 1};
    cout << thirdMax(nums3) << endl;
    return 0;
}