class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int temp;
        int m=grid.size();
        if(k==0){
            return grid;
        }
        if(grid.size()==1 && grid[0].size()==1){
            return grid;
        }
        for(int i=0;i<k;i++){
            for(int j=m-1;j>=0;j--){
                for(int k=grid[j].size()-1;k>=0;k--){
                   
                    if((j!=grid.size()-1) && k==(grid[j].size()-1)){
                        grid[j + 1][0]=grid[j][grid[j].size() - 1];
                    }
                    else if((j==grid.size()-1) && k==(grid[j].size()-1)){
                        temp=grid[0][0];
                        grid[0][0]=grid[m - 1][grid[j].size() - 1];
                    }
                    else{
                        grid[j][k + 1]=grid[j][k];
                    }
                }
            }
            if(grid[0].size()>1){
            grid[0][1]=temp;}
            else{
                grid[1][0]=temp;
            }
        }
        return grid;
    }
};