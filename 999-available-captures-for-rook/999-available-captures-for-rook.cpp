class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0,r,c;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    r=i;
                    c=j;
                }
            }
        }
        for(int k=c;k<8;k++){
            if(board[r][k]=='p'){
                count++;
                break;
                
            }
            else if(board[r][k]=='B'){
                break;
            }
        }
        for(int k=c;k>=0;k--){
            if(board[r][k]=='p'){
                count++;
                break;
                
            }
            else if(board[r][k]=='B'){
                break;
            }
        }
        for(int k=r;k<8;k++){
            if(board[k][c]=='p'){
                count++;
                break;
                
            }
            else if(board[k][c]=='B'){
                break;
            }
        }
        for(int k=r;k>=0;k--){
            if(board[k][c]=='p'){
                count++;
                break;
                
            }
            else if(board[k][c]=='B'){
                break;
            }
        }
        return count;
    }
};