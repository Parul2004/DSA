#include <bits/stdc++.h>
using namespace std;
int CountTheCharacters(string S, int N)
{
    map<char, int> mpp;
    int n = S.length(), i = 0;
    while (i < n)
    {
        char ch = S[i];
       
        while (i+1 < n)
        {
            if (S[i] == S[i + 1])
                i++;
            else
                break;
        }
        i++;
        mpp[ch]++;
    }

    int cnt = 0;

    for (auto it : mpp)
    {
        if (it.second == N)
            cnt++;
    }

    return cnt;
}
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << CountTheCharacters(s, n) << endl;
    return 0;
}