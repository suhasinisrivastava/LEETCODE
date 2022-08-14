class Solution {
public:
    bool cycle(int node, vector<int> adj[], int vis[], int dfsvis[]){
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if (cycle(it,adj,vis,dfsvis)){
                    return true;
                }
            }
            else if(dfsvis[it]==1){
                return true;
            }
        }
        dfsvis[node]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        int V=numCourses;
        for(int i=0;i<prerequisites.size();i++){
            int f=prerequisites[i][0];
            adj[f].push_back(prerequisites[i][1]);
        }
        vector<int> in(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                if(it==i){
                    return false;
                }
                in[it]++;
            }
        }
        int c=0;
        for(int i=0;i<numCourses;i++){
            if(in[i]==0){
                c++;
            }
        }
        int vis[V],dfsvis[V];
        memset(vis,0,sizeof(vis));
        memset(dfsvis,0,sizeof(dfsvis));
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(cycle(i,adj,vis,dfsvis)){
                    return false;
                }
            }
        }
        if(c==0){
            return false;
            
        }
        return true;
    }
};