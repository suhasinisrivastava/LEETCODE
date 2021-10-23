class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int i,j;
        vector<int> ans;
        for(i=0;i<logs.size();i++){
            for(j=logs[i][0];j<logs[i][1];j++){
                ans.push_back(j);
            }
        }
        int max=count(ans.begin(),ans.end(),ans[0]);
        int maxy=ans[0];
        int x= count(ans.begin(),ans.end(),ans[0]);
        vector<int> y;
        for(i=0;i<ans.size();i++){
            if(count(ans.begin(),ans.end(),ans[i])>max){
                
                max=count(ans.begin(),ans.end(),ans[i]);
                
            }
            
        }
        int min;
        if(max==1){
            sort(ans.begin(), ans.end());
            min=ans[0];
        }
        else{
        for(i=0;i<ans.size();i++){
            if(count(ans.begin(),ans.end(),ans[i])==max){
                y.push_back(ans[i]);
            }
        }
        sort(y.begin(), y.end());
        min=y[0];
        }
        return min;
        
    }
};