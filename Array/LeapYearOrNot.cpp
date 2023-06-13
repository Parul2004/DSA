#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y % 400 == 0)
    {
        cout << "YES";
    }
    else if (y % 100)
    {
        cout << "NO\n";
        cout << "Coming Leap Year is " << y + 4;
    }
    else if (y % 4 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
        if (y % 4 == 1)
        {
            cout << "\nComing Leap Year is " << y + 3;
        }
        else if (y % 4 == 2)
        {
            cout << "\nComing Leap Year is " << y + 2;
        }
        else
        {
            cout << "\nComing  Leap Year is " << y + 1;
        }
    }

    return 0;
}