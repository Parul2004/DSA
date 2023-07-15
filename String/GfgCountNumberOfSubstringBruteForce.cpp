#include <bits/stdc++.h>
using namespace std;
bool ifHomogenous(string s,int k)
{
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    if(mpp.size() == k) return true;
    return false;
}
int CountHomogenous(string s,int k)
{
    vector<string> ans;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j <= s.size()-i; j++)
        {
            string str = s.substr(i, j);

            bool res = ifHomogenous(str,k);

            if (res)
            {
                cout<<str<<endl;
                ans.push_back(str);
            }
        }
    }

    return ans.size();
}
int main()
{
    // abbcccaa
    string s;
    cin >> s;
    int k;
    cin>>k;
    cout << CountHomogenous(s,k) << endl;
    return 0;
}