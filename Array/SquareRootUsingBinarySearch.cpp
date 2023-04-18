#include <iostream>
using namespace std;

int squareRoot(int x)
{
    if (x == 0)
        return 0;
    int l = 1, h = x, ans = 0;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (m * m == x)
            return m;
        if (m * m < x)
        {
            l = m + 1;
            ans = m;
        }
        else
        {
            h = m - 1;
        }
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << squareRoot(n) << endl;
    ;
    return 0;
}