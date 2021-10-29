class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count=0;
        int i,j;
        
            for(i=0;i<mat.size();i++){
                for(j=0;j<mat.size();j++){
                    if(i==j){
                        count+=mat[i][j];
                        
                    }
                    
                }
            }
        
            int r= 0;
            int c=mat.size()-1;
        while(r<mat.size()){
            while(c>=0){
                if(r!=c){
                    count+=mat[r][c];
                }
                r++;
                c--;
            }
        }
            
        
            
        
            
        return count;
        
        
        
    }
};