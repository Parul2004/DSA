#include <bits/stdc++.h>
using namespace std;

vector<int> leftRigthDifference(vector<int> &nums)
{
    int n = nums.size();
    vector<int> leftSum(nums.size());
    vector<int> rightSum(nums.size());

    leftSum[0] = 0;
    int sum = leftSum[0];
    for (int i = 1; i < nums.size(); i++)
    {
        leftSum[i] = sum + nums[i-1];
        sum = leftSum[i];
    }
    cout << "\nLeftSum Elements are : ";
    for (auto i : leftSum)
    {
        cout << i << " ";
    }
    rightSum[nums.size() - 1] = 0;
    int jal = rightSum[nums.size() - 1];
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        rightSum[i] = jal + nums[i + 1];
        jal = rightSum[i];
    }
    cout << "\nrightSum Elements are : ";
    for (auto i : rightSum)
    {
        cout << i << " ";
    }
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(abs(rightSum[i] - leftSum[i]));
    }

    return ans;
}
int main()
{

    vector<int> v = {10, 4, 8, 3};
    vector<int> ans = leftRigthDifference(v);
    cout<<endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}