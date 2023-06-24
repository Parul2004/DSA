#include<bits/stdc++.h>
using namespace std;
void dfsTraversal(int node,vector<int>adj[],vector<int>&dfs,int vis[]){
        vis[node] = 1;
        dfs.push_back(node);
        
        // tarverse the graph
        
        for(auto it : adj[node]){
            if(!vis[it]){
                dfsTraversal(it,adj,dfs,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int start = 0;
        vector<int>dfs;
        int vis[V] = {0};
        dfsTraversal(start,adj,dfs,vis);
        return dfs;
    }
int main(){
     int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    vector<int>ans = dfsOfGraph(n,adj);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}