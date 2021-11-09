class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int i;
        if(count(nums.begin(),nums.end(),target)==2){
            for(i=0;i<nums.size();i++){
                if(nums[i]==target){
                    ans.push_back(i);
                    
                }
            }
        }
        else if(count(nums.begin(),nums.end(),target)==1){
            for(i=0;i<nums.size();i++){
                if(nums[i]==target){
                    ans.push_back(i);
                    ans.push_back(i);
                }
            }
        }
        else if(count(nums.begin(),nums.end(),target)==0){
            
                
                    ans.push_back(-1);
                    ans.push_back(-1);
                
            
        }
        else if(count(nums.begin(),nums.end(),target)>2){
            for(i=0;i<nums.size();i++){
                if(nums[i]==target){
                    ans.push_back(i);
                    ans.push_back(i+(count(nums.begin(),nums.end(),target)-1));
                    break;
                }
            }
        }
        return ans;
    }
};