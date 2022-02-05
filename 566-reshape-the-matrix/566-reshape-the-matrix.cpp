class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c>mat.size()*mat[0].size() || r*c<mat.size()*mat[0].size() ){
            return mat;
        }
        vector<vector<int>> v(r, vector<int> (c));
        int row=0;
        int col=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(col>c-1){
                    row++;
                    col=0;
                }
            v[row][col]=(mat[i][j]);
                col++;
        }
        }
        return v;
    }
    
};