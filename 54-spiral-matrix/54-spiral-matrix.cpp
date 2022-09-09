class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int bottom=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int dir=1;
        vector<int>v;
        while(left<=right && top<=bottom){
            if(dir==1){
                for(int i=left;i<=right;i++){
                    v.push_back(matrix[top][i]);
                    
                }
                top++;
                dir=2;
            }
            else if(dir==2){
                for(int i=top;i<=bottom;i++){
                    v.push_back(matrix[i][right]);
                    
                }
                right--;
                dir=3;
            }
            else if(dir==3){
                for(int i=right;i>=left;i--){
                    v.push_back(matrix[bottom][i]);
                    
                }
                bottom--;
                dir=4;
            }
            else if(dir==4){
                for(int i=bottom;i>=top;i--){
                    v.push_back(matrix[i][left]);
                   
                }
                left++;
                dir=1;
            }
        }
        return v;
    }
};