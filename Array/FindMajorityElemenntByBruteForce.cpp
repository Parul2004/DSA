#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(vector<int> &v, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for(int j = 0;j<n;j++){
            if(v[i]==v[j]){
                cnt++;
            }
        }
        if(cnt>floor(n/2)){
            return v[i];
        }
    }
    return -1;
}
int main()
{
    /*
   Time Complexity - O(N^2)
   Space Complexity - O(1)
   */
    vector<int> v = {4, 4, 2, 4, 3, 4, 4, 3, 2, 4};
    int n = v.size();
    int j = findMajorityElement(v, n);
    cout << j << endl;
    return 0;
}