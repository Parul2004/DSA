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
        int weight;
        cin >> weight;
        adj[u][v] = weight;
        adj[v][u] = weight;
    }

    return 0;
}