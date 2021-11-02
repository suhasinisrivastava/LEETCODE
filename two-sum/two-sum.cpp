class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> ans;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(i!=j && nums[i]+nums[j]==target && count(ans.begin(),ans.end(),i)==0 && count(ans.begin(),ans.end(),j)==0){
                    ans.push_back(i);
                    ans.push_back(j);
                    
                }
            }
            
        }
        return ans;
    }
};