class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<int> ans;
        int i,j;
        for(i=0;i<image.size();i++){
            int start=0;
            int end=image[i].size()-1;
            
                while(start!=end && start<end){
                int temp= image[i][start];
                image[i][start]=image[i][end];
                image[i][end]=temp;
                start++;
                end--;
            }
            
            
                
            
        }
        for(i=0;i<image.size();i++){
            for(j=0;j<image[i].size();j++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }
                else{
                    image[i][j]=0;
                }
            }
            
        }
        return image;
        
        
    }
};