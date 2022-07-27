class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    count=0;
                    bfs(grid,i,j,count);
                    maxi=max(maxi,count);
                }
            }
        }
        if(maxi==INT_MIN){
            return 0;
        }
        return maxi;
    }
    void bfs(vector<vector<int>>&grid, int i,int j,int &count){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]== 0){
            return;
        }
        count++;
        grid[i][j]=0;
        bfs(grid,i+1,j,count);
        bfs(grid,i-1,j,count);
        bfs(grid,i,j-1,count);
        bfs(grid,i,j+1,count);
        
    }
};