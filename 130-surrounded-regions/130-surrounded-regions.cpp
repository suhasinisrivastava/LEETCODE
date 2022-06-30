class Solution {
public:
    void help(int i, int j, vector<vector<char>> &board)
    {

         
        if(i>=0 && i<board.size() && j>=0 && j<board[0].size() && board[i][j]=='O')
        {
            board[i][j] = '$';
            help(i-1, j, board);
            help(i+1, j, board);
            help(i, j-1, board);
            help(i, j+1, board);
        }
    }
    
    void solve(vector<vector<char>> &board) 
    {   
        for(int i=0; i<board.size(); i++) // first and last column
        {
            if(board[i][0] == 'O')
                help(i, 0, board);
            if(board[i][board[0].size()-1] == 'O')
                help(i, board[0].size()-1, board);
        }
        
        for(int j=0; j<board[0].size(); j++) // first and last row 
        {
            if(board[0][j] == 'O')
                help(0, j, board);
            if(board[board.size()-1][j] == 'O')
                help(board.size()-1, j, board);
        }
        
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                if(board[i][j] == '$')
                    board[i][j] = 'O';
            }
        }
    
    }
};