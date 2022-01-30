class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     long long n=digits[0];
        vector<int> v;
        int x;
        if(digits.size()==1){
            digits[0]=digits[0]+1;
            
            
        }
        else{
          digits[digits.size()-1]=digits[digits.size()-1]+1;
        for(int i=digits.size()-1;i>=1;i--){
                x=digits[i];
                if(digits[i]>9){
                    digits[i]=digits[i]%10;
                    digits[i-1]+=x/10;
                }
            
        }}
        
        int y=digits[0];
        while(digits[0]>9){
            digits.insert(digits.begin(),digits[0]/10);
            digits[1]=digits[1]%10;
            
        }
        return digits;
    }
};