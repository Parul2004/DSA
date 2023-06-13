#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    char m;
    cin >> m;
    float at = (b * 100.0) / a;
    if (at >= 75 || (m == 'y' || m == 'Y'))
    {
        cout << "You have attended " << fixed << setprecision(2) << at << " classes. You are allowed to sit in the exam";
    }
    else
    {
        cout << "You have attended " << fixed << setprecision(2) << at << " classes. You are not allowed to sit in the exam";
    }
    return 0;
}