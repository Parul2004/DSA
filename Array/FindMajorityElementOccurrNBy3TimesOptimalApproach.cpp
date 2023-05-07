#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &v)
{
    vector<int> ans;
    int n = v.size();
    int cnt1 = 0, cnt2 = 0, ele1 = INT_MIN, ele2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && ele2 != v[i])
        {
            cnt1 = 1;
            ele1 = v[i];
        }
        else if(cnt2 == 0 && ele1 != v[i]){
            cnt2 = 1;
            ele2 = v[i];
        }
        else if(ele1 == v[i]) cnt1++;
        else if(ele2 == v[i]) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0,cnt2 = 0;

    for(int i = 0;i<n;i++){
        if(ele1 == v[i]) cnt1++;
        if(ele2 == v[i]) cnt2++;
    }

    if(cnt1>n/3) ans.push_back(ele1);
    if(cnt2>n/3) ans.push_back(ele2);

    return ans;
}
void printVec(vector<int> ans)
{
    int n = ans.size();
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    // Time Complexity - O(n^2);
    // Space Complexity -O(1)

    vector<int> v1 = {1, 2, 2, 3, 2};
    vector<int> v2 = {11, 33, 33, 11, 33, 11};
    vector<int> ans1 = findMajority(v1);
    printVec(ans1);
    vector<int> ans2 = findMajority(v2);
    printVec(ans2);
    return 0;
}