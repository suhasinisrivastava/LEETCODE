class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dist(n,INT_MAX);
        dist[src]=0;
        for(int i=0;i<=k;i++){
            vector<int> temp(n);
            copy(dist.begin(), dist.end(), temp.begin());
            for(auto it:flights){
                if(dist[it[0]]==INT_MAX)
                    continue;
                if(dist[it[0]]+it[2]<temp[it[1]]){
                    temp[it[1]]=dist[it[0]]+it[2];
                }
            }
            copy(temp.begin(), temp.end(), dist.begin());
        }
        int fl=0;
        
    
    
        
        if(dist[dst]==INT_MAX){
            return -1;
        }
        return dist[dst];
    }
};