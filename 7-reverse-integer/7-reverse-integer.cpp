class Solution {
public:
    int reverse(int x) {
        int c=0,num=0;
        if(x==0 || x>=INT_MAX || x<=INT_MIN){
            return 0;
        }
        bool y=true;
        if(x<0){
            x=x*-1;
            y=false;
        }
        int N=x;
        while(N>0){
            c++;
            N/=10;
        }
        string t;
        
        while(x>0){
            t+=to_string(x%10);
            x/=10;
        }
        
        long nu=stol(t);
        if(nu>=INT_MAX || nu<=INT_MIN){
            return 0;
        }
        if(y==false){
            return 0-nu;
        }
        return nu;
    }
};