#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &arr, int target)
{

    set<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; j < arr.size(); k++)
            {
                for (int l = k + 1; l < arr.size(); l++)
                {
                    long long sum = arr[i] + arr[j];
                    sum += arr[k];
                    sum += arr[l];

                    if (sum == target)
                    {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> vec(ans.begin(), ans.end());
    return vec;
}
int main()
{
    vector<int> v = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = fourSum(v, target);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
    }
    return 0;
}