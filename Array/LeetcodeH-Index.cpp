#include <bits/stdc++.h>
using namespace std;
int hIndex(vector<int> &citations)
{
    sort(citations.begin(), citations.end());
    int n = citations.size();
    int i = 0;
    vector<int> tmp;
    tmp.push_back(citations[0]);
    for (int j = 1; j < n; j++)
    {
        if (citations[i] != citations[j])
        {
            i++;
            tmp.push_back(citations[j]);
        }
    }
    citations.clear();
    citations = tmp;

    n = citations.size();

    cout << "\nYour Array is ";
    for (int i = 0; i < n; i++)
    {
        cout << citations[i] << " ";
    }
    cout << endl;
   // vector<pair<int, int>> vis;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (n - i >= citations[i]){
            ans = citations[i];
        }
        else{
            break;
        }
            
    }
    return ans;
}
int main()
{
    vector<int> citations = {1,3,1};
    cout << hIndex(citations);
    return 0;
}