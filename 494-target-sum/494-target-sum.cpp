class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int range=0;
        for(int i=0;i<nums.size();i++){
            range+=nums[i];
        }
        if(range < abs(target) || (target+range) %2 != 0) return 0;
        int s=(range+target)/2;
        int n=nums.size();
        int t[n+1][s+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<s+1;j++){
                if(i==0){
                    t[i][j]=0;
                }
                if(j==0){
                    t[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<s+1;j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]]+ t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][s];
        
    }
};