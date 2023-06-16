#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '*')
        {
            s.push(str[i]);
        }
        else
        {
            if (!s.empty())
            {
                s.pop();
            }
        }
    }

    string p = "";
    while (!s.empty())
    {
       p+= s.top();
        s.pop();
    }
 
    string ans = "";
    for (int i = p.size() - 1; i >= 0; i--)
    {
        ans += p[i];
    }

    cout << "String is : " << ans << endl;
    return 0;
}