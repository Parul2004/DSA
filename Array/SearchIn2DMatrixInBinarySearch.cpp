#include <bits/stdc++.h>
using namespace std;
bool findElement(vector<vector<int>> &v, int k)
{
    int n = v.size();
    int m = v[0].size();
    if (v.size() == 0)
        return false;
    int s = v[0][0], l = v[n - 1][m - 1];
    if (k < s || k > l)
        return false;

    int i = 0, j = v.size() - 1;
    while (i < n && j >= 0)
    {
        if (v[i][j] == k)
            return true;
        if (v[i][j] > k)
            return j--;
        else
            return i++;
    }

    return false;
}

int main()
{
  
    /*

     Very Important algo
     Time Complexity - O(N)
     Space Complexity - O(1)

     After 1st row end , 2nd row 1st element 15 < 40

     { { 10, 20, 30, 40 },
       { 15, 25, 35, 45 },
       { 27, 29, 37, 48 },
       { 32, 33, 39, 50 } }

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