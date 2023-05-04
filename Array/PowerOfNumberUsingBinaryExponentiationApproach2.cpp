#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    double ans = 1.0;
    long long nn = n;

    while (nn)
    {
        if (nn % 2 == 0)
        {
            x*=x;
            nn/=2;
        }
        else
        {
            ans*=x;
            nn-=1;
        }
    }

    if(n<0) (double)(1.0)/(double)(ans);
    return ans;
}
int main()
{
    // Time Complexity - O(logN)
    // Space Complexity - O(1)
    double x;
    cin >> x;
    int n;
    cin >> n;
    double ans =  myPow(x, n);
    cout<<ans<<endl;
    return 0;
}