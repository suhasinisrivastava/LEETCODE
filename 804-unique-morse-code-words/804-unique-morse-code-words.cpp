class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string w;
        unordered_map<string,int> ump;
        for(int i=0;i<words.size();i++){
            w="";
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]=='a'){
                    w+=s[0];
                }
                if(words[i][j]=='b'){
                    w+=s[1];
                }
                if(words[i][j]=='c'){
                    w+=s[2];
                }
                if(words[i][j]=='d'){
                    w+=s[3];
                }
                if(words[i][j]=='e'){
                    w+=s[4];
                }
                if(words[i][j]=='f'){
                    w+=s[5];
                }
                if(words[i][j]=='g'){
                    w+=s[6];
                }
                if(words[i][j]=='h'){
                    w+=s[7];
                }
                if(words[i][j]=='i'){
                    w+=s[8];
                }if(words[i][j]=='j'){
                    w+=s[9];
                }
                if(words[i][j]=='k'){
                    w+=s[10];
                }
                if(words[i][j]=='l'){
                    w+=s[11];
                }
                if(words[i][j]=='m'){
                    w+=s[12];
                }
                if(words[i][j]=='n'){
                    w+=s[13];
                }
                if(words[i][j]=='o'){
                    w+=s[14];
                }
                if(words[i][j]=='p'){
                    w+=s[15];
                }
                if(words[i][j]=='q'){
                    w+=s[16];
                }
                if(words[i][j]=='r'){
                    w+=s[17];
                }
                if(words[i][j]=='s'){
                    w+=s[18];
                }
                if(words[i][j]=='t'){
                    w+=s[19];
                }
                if(words[i][j]=='u'){
                    w+=s[20];
                }
                if(words[i][j]=='v'){
                    w+=s[21];
                }
                if(words[i][j]=='w'){
                    w+=s[22];
                }
                if(words[i][j]=='x'){
                    w+=s[23];
                }
                if(words[i][j]=='y'){
                    w+=s[24];
                }
                if(words[i][j]=='z'){
                    w+=s[25];
                }
            }
            ump[w]++;
            
        }
        return ump.size();
    }
};