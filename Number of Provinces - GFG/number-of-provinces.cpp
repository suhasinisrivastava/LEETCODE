//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int i, vector<vector<int>>adj,vector<int>&vis,int V){
        vis[i]=1;
        for(int j=0;j<V;j++){
            if(adj[i][j]==1){
                if(vis[j]==0){
                    dfs(j,adj,vis,V);
                }
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int c=0;
        vector<int>vis(V+1,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                c++;
                dfs(i,adj,vis,V);
            }
        }
        return c;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends