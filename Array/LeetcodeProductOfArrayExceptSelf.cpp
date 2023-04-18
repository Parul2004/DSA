#include <bits/stdc++.h>
using namespace std;
/*
vector<int> productExceptSelf(vector<int> &nums)
{
    int countzeros = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            countzeros += 1;
        }
    }

    vector<int> v;

    if (countzeros == 0)
    {

        int p = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            p = p * nums[i];
        }

        int m = p;
        for (int i = 0; i < nums.size(); i++)
        {
            v.push_back(p / nums[i]);
            p = m;
        }


    }
    else if (countzeros == 1)
    {

        int idx, mul = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
               continue;
            }
            else
            {
                mul *= nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                v.push_back(mul);
            }
            else
            {
                v.push_back(0);
            }
        }
    }
    else if( countzeros > 1)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            v.push_back(0);
        }
    }

    return v;
}

*/
vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> v;
    int p = 1;
    for (int i = 0; i < v.size(); i++)
    {
        p = p * nums[i];
        v.push_back(p);
    }
    p = 1;

    for (int i = nums.size() - 1; i > 0; i--)
    {
        v.push_back(nums[i - 1] * p);
        p *= nums[i];
    }
    v.push_back(p);
    
    reverse(v.begin(),v.end());
    return v;
}
int main()
{

    vector<int> v = {1, 2, 3, 4};

    vector<int> h = productExceptSelf(v);
    for (auto i : h)
    {
        cout << i << " ";
    }

    return 0;
}