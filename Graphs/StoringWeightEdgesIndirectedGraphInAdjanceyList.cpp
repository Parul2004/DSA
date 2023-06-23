#include <bits/stdc++.h>
using namespace std;

int main()
{
    // number of nodes and number of edges
    int n, m;
    cin >> n >> m;

    // if 1 based indexing is there
    vector<pair<int,int>>adj[n+1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        int weight;
        cin >> weight;
        adj[u].push_back({v,weight});
        adj[v].push_back({u,weight});
    }

    return 0;
}