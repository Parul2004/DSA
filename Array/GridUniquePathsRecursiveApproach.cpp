#include <bits/stdc++.h>
using namespace std;
int countPaths(int i, int j, int rows, int cols)
{
    if (i == (rows - 1) && j == (cols - 1))
        return 1;
    if (i >= rows || j >= cols)
        return 0;
    else
        return countPaths(i + 1, j, rows, cols) + countPaths(i, j + 1, rows, cols);
}
int uniquePaths(int rows, int cols)
{
    return countPaths(0, 0, rows, cols);
}
int main()
{
    // Time Complexity :- The time comp[lexity of this recursive solution is exponential.

    // Space Complexity :- As we are using stack space for recursion so the space complexity will also be exponential.
    int totalPaths = uniquePaths(2, 3);
    cout << "The Total number of Unique Paths are " << totalPaths << endl;
    return 0;
}