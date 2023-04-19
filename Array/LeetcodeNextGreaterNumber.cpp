#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> v;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[n2 - 1])
            {
                v.push_back(-1);
                break;
            }
            else
            {
                if (nums1[i] == nums2[j])
                {
                    int u = j + 1;
                    int flag = 0;
                    while (u < n2)
                    {
                        
                        if (nums2[u] > nums1[i])
                        {
                            
                            flag = 1;
                            v.push_back(nums2[u]);
                            break;
                        }
                        else{
                            u++;
                        }
                    }

                    if(flag == 0)
                    {
                        v.push_back(-1);
                        break;
                    }
                }
            }
        }
    }

    return v;
}
int main()
{
    vector<int> nums1 = {1,3,5,2,4};
    vector<int> nums2 = {6,5,4,3,2,1,7};

    vector<int> v = nextGreaterElement(nums1, nums2);
    for (auto i : v)
        cout << i << " ";
    return 0;
}