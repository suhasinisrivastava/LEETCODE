class Solution {
public:
    vector<vector<int>>adj, v;
    vector<bool> vis;
    int timer=0;
    vector<int> tin,low;
    
    void dfs(int node,int parent){
        
        
        tin[node]=low[node]=timer++;
        vis[node]=true;
        for(auto it:adj[node]){
           
            if(!vis[it]){
                dfs(it,node);
                low[node]=min(low[node],low[it]);
                if(low[it]>tin[node]){
                    vector <int> temp;
                    temp.push_back(node);
                    temp.push_back(it);
                    v.push_back(temp);
                    
                }
             
                
            }
            else if(it != parent){
                low[node]=min(low[node],tin[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        for(int i=0;i< connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        
        tin.resize(n,-1);
       low.resize(n,-1);
       vis.resize(n,false);
        
                for(int i = 0; i < n; i++)
        {
            if(!vis[i])
                dfs(i, -1);
        }
        return v;
    }
};