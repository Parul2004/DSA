#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[])
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            vis[it] = 1;
            dfs(it, adj, vis);
        }
    }
}
int numberOfProvinces(vector<vector<int>> adj, int V)
{
    vector<int> adjList[V];

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (adj[i][j] == 1 && j != i)
            {
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
        }
    }

    int vis[V] = {0};
    vis[0] = 1;
    int cnt = 0;
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            cnt++;
            dfs(i, adjList, vis);
        }
    }

    return cnt;
}
int main()
{
    vector<vector<int>> adj = {{1, 0, 1},
                               {0, 1, 0},
                               {1, 0, 1}};
    int V = 3;
    cout << numberOfProvinces(adj, V) << endl;

    return 0;
}