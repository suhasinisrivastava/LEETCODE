class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> v;
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    if(board[i][j]!='.'){
                    if(count(board[i].begin(),board[i].end(),board[i][j])>1 ){
                        return false;
                    }
                    }
                }
            }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]=='1' || board[j][i]=='2' || board[j][i]=='3' || board[j][i]=='4' || board[j][i]=='5' || board[j][i]=='6' || board[j][i]=='7' || board[j][i]=='8' || board[j][i]=='9'){
                v.push_back(board[j][i]);
            }
            }
            
            for(int j=0;j<v.size();j++){
                if(count(v.begin(),v.end(),v[j])>1){
                    return false;
                }
               
                    
            }
             v.clear();
            
            }
        v.clear();
for(int k=0;k<9;k+=3){
    for(int l=0;l<9;l+=3){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i+k][j+l]!='.'){
                v.push_back(board[i+k][j+l]);
            }
            }
        }
        for(int m=0;m<v.size();m++){
                if(count(v.begin(),v.end(),v[m])>1){
                    return false;
                }
               
                    
        }
        v.clear();
            
    }
}
        
       
        return true;
        
    }
};