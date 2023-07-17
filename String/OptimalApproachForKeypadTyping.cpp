#include <bits/stdc++.h>
using namespace std;
string printNumber(string s, int n)
{
    // code here
    unordered_map<char, char> m;
    m['a'] = m['b'] = m['c'] = '2';
    m['d'] = m['e'] = m['f'] = '3';
    m['g'] = m['h'] = m['i'] = '4';
    m['j'] = m['k'] = m['l'] = '5';
    m['m'] = m['n'] = m['o'] = '6';
    m['p'] = m['q'] = m['r'] = m['s'] = '7';
    m['t'] = m['u'] = m['v'] = '8';
    m['w'] = m['x'] = m['y'] = m['z'] = '9';

    string k = "";
    for (int i = 0; i < n; i++)
    {
        k += (char)m[s[i]];
    }
    return k;
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    cout << printNumber(s, n) << endl;

    return 0;
}