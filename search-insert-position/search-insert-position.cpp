class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,j,ans=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
            }
           
            
        }
        if(ans==-1){
            if(target>nums[nums.size()-1]){
                ans=nums.size();
            }
            else{
                for(i=0;i<nums.size();i++){
                    if(nums[i]>target  && ans==-1 ){
                nums.insert(nums.begin()+i,target);
                ans=i;
                break;
            }
                }
        }
        }
        
        return ans;
    }
};