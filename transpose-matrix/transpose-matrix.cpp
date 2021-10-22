class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j;
        vector<int> ans;
        vector<vector<int>> f;
        int m= matrix[i].size();
        for(i=0;i<m;i++){
            for(j=0;j<matrix.size();j++){
                ans.push_back(matrix[j][i]);
                
            }
            
            f.push_back(ans);
            
            ans.clear();
        }
        
        return f;
    }
};