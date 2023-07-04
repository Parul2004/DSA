#include <bits/stdc++.h>
using namespace std;
int isDivisible(string s)
{
    // complete the function here

    int n = s.length(), i = 0;
    while (i < n && s[i] == '0')
    {
        i++;
    }
    string p = s.substr(i, n);
    long long int plen = p.length();

    long long int w = 0;
    for (int i = 0; i < plen; i++)
    {
        w = (w * 10) + (p[i] - '0');
    }
    cout<<w<<endl;
    i = 0;
    long long int sum = 0;
    while (w != 0)
    {
        sum = (sum) +(w%10)*pow(2, i);
        i++;
        w /= 10;
    }

   

    cout << sum << endl;
    return (sum % 3 == 0) ? 1 : 0;
}
int main()
{
    string s = "11111110100";

    cout << isDivisible(s) << endl;
    return 0;
}