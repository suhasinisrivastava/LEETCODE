//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	int findpar(int node, vector<int>&par){
	    if(node==par[node]){
	        return node;
	    }
	    return par[node]=findpar(par[node],par);
	}
	void findunion(int x, int y, vector<int>&rank, vector<int>&par){
	    int u=findpar(x,par);
	    int v=findpar(y,par);
	    
	    if(rank[u]<rank[v]){
	        par[u]=v;
	    }
	    else if(rank[u]>rank[v]){
	        par[v]=u;
	    }
	    else{
	        par[u]=v;
	        rank[v]++;
	    }
	}
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<pair<int,pair<int,int>>>v;
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                //cout<<it[1];
                v.push_back({it[1],{i,it[0]}});
            }
        }
        sort(v.begin(),v.end());
        // for(auto it:v){
        //     cout<<it.first<<" ";
        // }
        vector<pair<int,int>>mst;
        vector<int>par(V);
        for(int i=0;i<V;i++){
            par[i]=i;
        }
        vector<int>rank(V,0);
        int cost=0;
        for(auto it:v){
            if(findpar(it.second.first,par)!=findpar(it.second.second,par)){
                cost+=it.first;
                mst.push_back({it.second.first,it.second.second});
                findunion(it.second.first,it.second.second,rank,par);
            }
            
        }
        return cost;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends