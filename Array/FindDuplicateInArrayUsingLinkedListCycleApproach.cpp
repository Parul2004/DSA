#include <bits/stdc++.h>

using namespace std;

int findDup(vector<int> &v)
{
    int slow = v[0];
    int fast = v[0];

    do
    {
        slow = v[slow];
        fast = v[v[fast]];
    } while (slow != fast);
    fast = v[0];
    while (slow != fast)
    {
        slow = v[slow];
        fast = v[fast];
    }
    return slow;
}
int main()
{
    vector<int> v = {1, 3, 4, 2, 3};
    cout << "Duplicate Element is " << findDup(v) << endl;
    return 0;
}