#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &v)
{
    vector<int> ans;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {

        if (ans.size() == 0 || v[i] != ans[0])
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if(v[i]==v[j]){
                    cnt++;
                }
            }
            if(cnt > n/3){
                ans.push_back(v[i]);
            }
        }
        if(ans.size() == 2) break;
    }
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