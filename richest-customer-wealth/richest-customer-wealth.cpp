class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j,sum=0;
        vector<int> ans;
        for(i=0;i<accounts.size();i++){
            for(j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
                ans.push_back(sum);
                
            }
            sum=0;
        }
        int max=ans[0];
        for(i=0;i<ans.size();i++){
            if(ans[i]>max){
                max=ans[i];
            }
        }
        return max;
    }
};