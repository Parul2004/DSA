#include <bits/stdc++.h>
using namespace std;
bool findElement(vector<vector<int>> &v, int k)
{

    int lo = 0;
    if (!v.size())
        return false;
    int hi = (v.size() * v[0].size()) - 1;
    int n = v[0].size();
    while (lo <= hi)
    {
        int mid = (lo + (hi - lo)/2);
        if (v[mid / n][mid % n] == k)
            return true;
        if (v[mid / n][mid % n] > k)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return false;
}
int main()
{
    /*

     Very Important algo
     Time Complexity - O(N)
     Space Complexity - O(1)

     After 1st row end , 2nd row 1st element 15 < 40 here this algo fails

     { { 10, 20, 30, 40 },
       { 15, 25, 35, 45 },
       { 27, 29, 37, 48 },
       { 32, 33, 39, 50 } }

       here this is applicable
       The first integer of each row is greater than the last integer of the previous row.

    */
    vector<vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int k = 10;
    bool result = findElement(v, k);
    if (result == true)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}