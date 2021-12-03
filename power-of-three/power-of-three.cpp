class Solution {
public:
    bool isPowerOfThree(int n) {
        int x;
        bool ans;
        for(int i=0;i<sqrt(n);i++){
            
        if(pow(3,i)==n){
            ans= true;
            break;
        }
        else{
            ans=false;
        }
        }
        return ans;
    }
};