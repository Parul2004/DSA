#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
    int i = 0, n = s.size();
    while (s[i] == ' ')
        i++;
    int positive = 0, negative = 0;
    if (s[i] == '+')
    {
        positive++;
        i++;
    }

    if (s[i] == '-')
    {
        negative++;
        i++;
    }
    double ans = 0;

    while (i < n && s[i] >= '0' && s[i] <= '9')
    {
        ans = (ans * 10) + (s[i] - '0');
        i++;
    }

    if (negative > 0 && positive > 0)
        return 0;

    if (negative > 0)
        ans = -ans;

    if (ans > INT_MAX)
        ans = INT_MAX;

    if (ans < INT_MIN)
        ans = INT_MIN;

    return (int)ans;
}
int main()
{
    string s;
    cin >> s;
    cout << myAtoi(s) << endl;
    return 0;
}