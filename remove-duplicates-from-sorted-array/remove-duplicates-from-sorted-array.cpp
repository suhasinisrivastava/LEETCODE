class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int m=nums.size();
        vector<int> ans;
        int i,j;
        for(i=0;i<nums.size();i++){
        
                if(count(ans.begin(),ans.end(),nums[i])==0){
                    ans.push_back(nums[i]);
                }
            
        }
        nums.clear();
        for(i=0;i<ans.size();i++){
            nums.push_back(ans[i]);
        }
        return nums.size();
    }
};