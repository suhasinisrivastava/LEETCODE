class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int max=nums[0];
        int ans=-1;
        int p=1;
        sort(nums.begin(),nums.end());
        if(count(nums.begin(),nums.end(),1)==0){
            ans=1;
        }
        
        else{
        for(int j=0;j<nums.size();j++){
            
            if(p==nums[j] && p<nums[nums.size()-1]){
                p++;
            }
        }
        
        if(count(nums.begin(),nums.end(),p)==0 && p<nums[nums.size()-1]){
            ans=p;
        }
        
        if(ans==-1){
            ans=nums[nums.size()-1]+1;
        }
        }
        return ans;
    }
};