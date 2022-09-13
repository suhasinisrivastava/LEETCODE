class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX;
        int p=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<m){
                m=prices[i];
            }
            else if(prices[i]-m>p){
                p=prices[i]-m;
            }
        }
        
        return p;
    }
};