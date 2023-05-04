#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    return pow(x,n);
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