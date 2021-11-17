class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        int i,j,p,min,q;
        for(i=0;i<matrix.size();i++){
            min= matrix[i][0];
            for(j=0;j<matrix[i].size();j++){
                
                if(matrix[i][j]<=min){
                    min=matrix[i][j];
                     p=j;
                }
                
            }
            int max=min;
            for(q=0;q<matrix.size();q++){
                
                if(matrix[q][p]>min){
                    max=matrix[q][p];
                }
            }
            if(max==min){
                ans.push_back(min);
            }
        }
        return ans;
    }
};