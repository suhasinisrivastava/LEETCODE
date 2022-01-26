class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int sum,r,c,ans=0,count;
        for(int i=0;i<mat.size();i++){
            sum=0,count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                    r=i;
                    c=j;
                }
                
            }
            if(count==1){
                for(int i=0;i<mat.size();i++){
                    if(mat[i][c]==1){
                        count++;
                    }
                }
                if(count==2){
                ans++;
            }
            
            }
            
            
        }
        return ans;
    }
};