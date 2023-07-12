#include <bits/stdc++.h>
using namespace std;
long long power(int N, int R)
{
    // Your code here
    long long q = (pow(N, R));
    long long r = q % (1000000007);
    return r;
}
int main()
{
    int N, R;
    cin >> N >> R;
    cout << power(N, R) << endl;
    return 0;
}