class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    count+=4;
                    i+=1;
                }
                else if(s[i+1]=='X'){
                    count+=9;
                    i+=1;
                }
                else{
                count+=1;}
            }
            else if(s[i]=='V'){
                count+=5;
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    count+=40;
                    i+=1;
                }
                else if(s[i+1]=='C'){
                    count+=90;
                    i+=1;
                }
                else{
                    count+=10;
                }
            }
            else if(s[i]=='L'){
                count+=50;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    count+=400;
                    i+=1;
                }
                else if(s[i+1]=='M'){
                    count+=900;
                    i+=1;
                }
                else{
                    count+=100;
                }
            }
            else if(s[i]=='M'){
                count+=1000;
            }
            else if(s[i]=='D'){
                count+=500;
            }
        }
        return count;
    }
};