class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image[sr][sc];
        if(n==newColor){
            return image;
        }
        bfs(image,sr,sc,newColor,n);
        return image;
    }
    void bfs(vector<vector<int>>& image, int i, int j, int c, int n){
        if(i<0 || i>=image.size() || j<0 || j>=image[i].size() || image[i][j]!=n){
            return;
        }
        image[i][j]=c;
        bfs(image,i+1,j,c,n);
        bfs(image,i-1,j,c,n);
        bfs(image,i,j+1,c,n);
        bfs(image,i,j-1,c,n);
        
        
    }
};