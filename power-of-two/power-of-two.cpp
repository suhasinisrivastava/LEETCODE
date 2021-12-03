class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i;
        bool ans;
        if(n>10){
        for(i=0;i<=sqrt(n);i++){
            if(pow(2,i)==n){
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
            if(pow(2,i)==n){
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