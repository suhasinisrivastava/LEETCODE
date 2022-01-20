class Solution {
public:
    bool isPalindrome(int x) {
         long long rem=0,r,count=0;
        int y=x;
        bool ans=false;
        if(x<0){
            ans=false;
        }
        else if(x%10==0){
            ans=false;
        }
        else{
            while(x!=0){
    	        r=x%10;
    	       
    	        rem=rem*10+r;
    	        
    	        x/=10;
    	        
    	        
    	    }
    	    
        }
        if(rem==y){
    	        ans= true;
    	        
    	        
    	    }
        return ans;
    }
};