class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i=0;
        bool ans=false;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            ans=false;
        }
        else{
            
        
        for(i=0;i<=nums.size()-2;i++){
            if(nums[i]==nums[i+1] ){
                ans= true;
                break;
            }
            
        }
        }
        return ans;
    }
};