#include <bits/c++.h>
using namespace std;
int temoAttacking(vector<int> &v, int d)
{
    set<int> s;
    int n = timeSeries.size();
    for (int i = 0; i < n; i++)
    {

        for (int j = timeSeries[i]; j <= timeSeries[i] + duration - 1; j++)
        {

            s.insert(j);
        }
    }

    int c = 0;
    for (auto i : s)
    {
        c++;
    }
    return c;
}
int main()
{
    vector<int> v = {1, 4};
    int d = 2;

    return 0;
}