class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                v.insert(matrix[i][j]);
            }
            if(v.size()==matrix.size()){
                v.clear();
            }
            else{
                return false;
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                v.insert(matrix[j][i]);
            }
            if(v.size()==matrix.size()){
                v.clear();
            }
            else{
                return false;
            }
        }
        return true;
    }
};