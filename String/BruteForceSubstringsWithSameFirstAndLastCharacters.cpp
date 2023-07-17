#include <bits/stdc++.h>
using namespace std;
bool equalEnds(string s)
{
    int n = s.length() - 1;
    return (s[0] == s[n]);
}
int countSubstringWithEqualEnds(string s)
{
    int n = s.length();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            string str = s.substr(i, len);
            bool res = equalEnds(str);
            if (res == true)
                cnt++;
        }
    }

    return cnt;
}
int main()
{
    string s;
    cin >> s;

    cout << countSubstringWithEqualEnds(s) << endl;
    return 0;
}