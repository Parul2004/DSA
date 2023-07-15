#include <bits/stdc++.h>
using namespace std;
bool ifHomogenous(string s)
{
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
        if (mpp.size() > 1)
            return false;
    }

    return true;
}
int CountHomogenous(string s)
{
    vector<string> ans;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j <= s.size()-i; j++)
        {
            string str = s.substr(i, j);

            bool res = ifHomogenous(str);

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
    cout << CountHomogenous(s) << endl;
    return 0;
}