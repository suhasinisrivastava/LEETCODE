class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        bool x,y,p,q,s,t,e,f;
        int count=0;
        vector<vector<string>> move(3,vector<string>(3,"a"));
       /* if(moves.size()<5){
            return "Pending";
        }*/
        for(int i=0;i<moves.size();i++){
           
            
                if(i%2==0){
                    move[moves[i][0]][moves[i][1]]="X";
                    count++;
                }
                else{
                    move[moves[i][0]][moves[i][1]]="O";
                    count++;
                }
            }
        for(int i=0;i<3;i++){
            x=true,y=true,p=true,q=true,s=true,t=true,e=true,f=true;
            for(int k=0;k<3;k++){
                if(move[i][k]!="X"){
                    x=false;
                    break;
                }
                
            }
            for(int l=0;l<3;l++){
                if(move[l][i]!="X"){
                    y=false;
                    break;
                }
        
            }
            for(int m=0;m<3;m++){
                if(move[m][i]!="O"){
                    p=false;
                    break;
                }
               
            }
            for(int n=0;n<3;n++){
                if(move[i][n]!="O"){
                    q=false;
                    break;
                }
                
            }
            if(x==true || y==true){
                return "A";
            }
            else if(p==true || q==true){
                return "B";
            }}
        s=true,t=true,e=true,f=true;
        for(int i=0;i<3;i++){
            for(int w=0;w<3;w++){
                if(i==w && move[i][w]!="X"){
                    s=false;
                    break;
                }
               
            }}
        if(s==true){
            return "A";
        }
        for(int i=0;i<3;i++){
            for(int w=0;w<3;w++){
                if(i==w && move[i][w]!="O"){
                    t=false;
                    break;
                }
                
            }}
        
           if(t==true){
            return "B";
        } 
        for(int i=2;i>=0;i--){
            for(int w=0;w<3;w++){
                if((2-i)==w && move[w][i]!="X"){
                    e=false;
                    break;
                }
               
            }}
        if(e==true){
            return "A";
        } 
        for(int i=2;i>=0;i--){
            for(int w=0;w<3;w++){
                if((2-i)==w && move[w][i]!="O"){
                    f=false;
                    break;
                }
                
            }}
        
           if(f==true){
            return "B";
        }   
        
        if(count<9 && (x==false && y==false && p==false && q==false && s==false && t==false && e==false && f==false)){
            return "Pending";
        }  
        
      
        return "Draw";
    }
};