class Solution {
public:
    int dis(vector<int> &n1, vector<int> &n2){
        return abs(abs(n1[0]-n2[0])+abs(n1[1]-n2[1]));
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<pair<int, int>>adj[points.size()];
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                adj[i].push_back({j,dis(points[i],points[j])});
                adj[j].push_back({i,dis(points[i],points[j])});
                
            }
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<bool>vis(points.size(),false);
        pq.push({0,0});
        int ans=0;
        while(!pq.empty()){
            pair<int,int>p=pq.top();
            pq.pop();
            if(vis[p.second]==true){
                continue;
            }
            int u=p.second;
            int w=p.first;
            ans+=w;
            vis[u]=true;
            for(auto it:adj[u]){
                if(!vis[it.first]){
                    pq.push({it.second,it.first});
                }
            }
            
            
            
        }
        return ans;
    }
};