class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int matrix[m][n];
        int i,j,count=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                matrix[i][j]=0;
            }
        }
        for(i=0;i<indices.size();i++){
            for(j=0;j<n;j++){
                matrix[indices[i][0]][j]++;
            }
            for(j=0;j<m;j++){
                matrix[j][indices[i][1]]++;
            }
        }
         for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};