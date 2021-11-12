class Solution {
public:
    vector<int> sumZero(int n) {
        int i,sum=0;
        vector<int> ans;
        
            if(n==1){
                ans.push_back(0);
            }
            else if(n>1 && n%2==0){
                for(i=-n/2;i<=n/2;i++){
                    ans.push_back(i);
                    
                }
                ans.erase(ans.begin()+n/2);
            }
            else if(n>1 && n%2!=0){
                for(i=-n/2;i<=n/2;i++){
                    ans.push_back(i);
                    
                }
            }
        return ans;
        
    }
};