#include<bits/stdc++.h>
using namespace std;
 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>bfs;
        int vis[V] = {0};
        vis[0] = 1;
        queue<int>q;
        
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            bfs.push_back(node);
            
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
        
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

    vector<int>ans = bfsOfGraph(n,adj);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}