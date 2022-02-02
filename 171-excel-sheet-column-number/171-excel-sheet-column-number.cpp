class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(auto i:columnTitle){
            
            ans=ans*26+(i-64);}
        
        
        return ans;
    }
};