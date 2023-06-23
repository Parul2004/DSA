#include <bits/stdc++.h>
using namespace std;

int main()
{
    // number of nodes and number of edges
    int n, m;
    cin >> n >> m;

    // if 1 based indexing is there
    int adj[n + 1][m + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    return 0;
}