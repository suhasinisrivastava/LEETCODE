class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        int i,j;
        ans.push_back(0);
        for(i=1;i<(gain.size()+1);i++){
            ans.push_back(ans[i-1]+gain[i-1]);
        }
        int max=ans[0];
        for(j=0;j<ans.size();j++){
            if(ans[j]>max){
                max=ans[j];
            }
        }
        
        return max;
    }
};