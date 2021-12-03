class Solution {
public:
    bool isPowerOfFour(int n) {
        int i;
        bool ans;
        if(n>10){
        for(i=0;i<=sqrt(n);i++){
            if(pow(4,i)==n){
                ans=true;
                break;
            }
            else{
                ans=false;
            }
        }
        }
        else{
            for(i=0;i<=n;i++){
            if(pow(4,i)==n){
                ans=true;
                break;
            }
            else{
                ans=false;
            }
        }
        }
        return ans;
    }
};