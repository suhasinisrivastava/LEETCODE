class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
         vector<pair<int,int>>adj[n+1];
        for(int i=0;i<times.size();i++){
            int f=times[i][0];
            adj[f].push_back(make_pair(times[i][1],times[i][2]));
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int> dis(n+1,INT_MAX);
        dis[k]=0;
        pq.push(make_pair(0,k));
        while(!pq.empty()){
            int dist=pq.top().first;
            int prev=pq.top().second;
            pq.pop();
            for(auto it:adj[prev]){
                int next=it.first;
                int nextdist=it.second;
                if(dis[next]>dis[prev]+nextdist){
                    dis[next]=dis[prev]+nextdist;
                    pq.push(make_pair(dis[next],next));
                }
            }
        }
        int count=0;
        for(int i=0;i<dis.size();i++){
            if(dis[i]==INT_MAX){
                count++;
            }
        }
        if(count>1){
            return -1;
        }
        int maxi=*max_element(dis.begin()+1,dis.end());
        return maxi;
    }
};